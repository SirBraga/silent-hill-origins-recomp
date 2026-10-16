#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EFB0
// Address: 0x29efb0 - 0x29f008
void sub_0029EFB0_0x29efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EFB0_0x29efb0");
#endif

    switch (ctx->pc) {
        case 0x29efc8u: goto label_29efc8;
        case 0x29efdcu: goto label_29efdc;
        case 0x29efe4u: goto label_29efe4;
        case 0x29efecu: goto label_29efec;
        case 0x29f000u: goto label_29f000;
        default: break;
    }

    ctx->pc = 0x29efb0u;

    // 0x29efb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29efb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29efb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29efbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29efc0: 0xc0a6df0  jal         func_29B7C0
    ctx->pc = 0x29EFC0u;
    SET_GPR_U32(ctx, 31, 0x29EFC8u);
    ctx->pc = 0x29EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFC0u;
    // 0x29efc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7C0u, 0x29EFC0u, 0x29EFC8u)) {
        return;
    }
    ctx->pc = 0x29EFC8u;
label_29efc8:
    // 0x29efc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x29efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x29efcc: 0x2463d920  addiu       $v1, $v1, -0x26E0
    ctx->pc = 0x29efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957344));
    // 0x29efd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efd4: 0xc0a8acc  jal         func_2A2B30
    ctx->pc = 0x29EFD4u;
    SET_GPR_U32(ctx, 31, 0x29EFDCu);
    ctx->pc = 0x29EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFD4u;
    // 0x29efd8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2B30u, 0x29EFD4u, 0x29EFDCu)) {
        return;
    }
    ctx->pc = 0x29EFDCu;
label_29efdc:
    // 0x29efdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29EFDCu;
    {
        const bool branch_taken_0x29efdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFDCu;
        // 0x29efe0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efdc) {
            ctx->pc = 0x29EFECu;
            goto label_29efec;
        }
    }
    ctx->pc = 0x29EFE4u;
label_29efe4:
    // 0x29efe4: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x29EFE4u;
    SET_GPR_U32(ctx, 31, 0x29EFECu);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x29EFE4u, 0x29EFECu)) {
        return;
    }
    ctx->pc = 0x29EFECu;
label_29efec:
    // 0x29efec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29EFECu;
    {
        const bool branch_taken_0x29efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFECu;
        // 0x29eff0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29efec) {
            ctx->pc = 0x29F010u;
            return;
        }
    }
    ctx->pc = 0x29EFF4u;
    // 0x29eff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29eff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eff8: 0xc0a6dfe  jal         func_29B7F8
    ctx->pc = 0x29EFF8u;
    SET_GPR_U32(ctx, 31, 0x29F000u);
    ctx->pc = 0x29EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFF8u;
    // 0x29effc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7F8u, 0x29EFF8u, 0x29F000u)) {
        return;
    }
    ctx->pc = 0x29F000u;
label_29f000:
    // 0x29f000: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x29F000u;
    {
        const bool branch_taken_0x29f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f000) {
            ctx->pc = 0x29EFE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29efe4;
        }
    }
    ctx->pc = 0x29F008u;
}
