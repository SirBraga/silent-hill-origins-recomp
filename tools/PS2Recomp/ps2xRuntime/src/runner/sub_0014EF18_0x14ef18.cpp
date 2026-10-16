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

// Function: sub_0014EF18
// Address: 0x14ef18 - 0x14efa0
void sub_0014EF18_0x14ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF18_0x14ef18");
#endif

    switch (ctx->pc) {
        case 0x14ef5cu: goto label_14ef5c;
        case 0x14ef64u: goto label_14ef64;
        case 0x14ef70u: goto label_14ef70;
        case 0x14ef8cu: goto label_14ef8c;
        default: break;
    }

    ctx->pc = 0x14ef18u;

    // 0x14ef18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ef1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14ef20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14ef24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x14ef28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ef2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ef34: 0x24421f08  addiu       $v0, $v0, 0x1F08
    ctx->pc = 0x14ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7944));
    // 0x14ef38: 0x24631f20  addiu       $v1, $v1, 0x1F20
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7968));
    // 0x14ef3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14ef3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef40: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14ef44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14ef48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EF48u;
    {
        const bool branch_taken_0x14ef48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF48u;
        // 0x14ef4c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef48) {
            ctx->pc = 0x14EF64u;
            goto label_14ef64;
        }
    }
    ctx->pc = 0x14EF50u;
    // 0x14ef50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef54: 0xc0538ae  jal         func_14E2B8
    ctx->pc = 0x14EF54u;
    SET_GPR_U32(ctx, 31, 0x14EF5Cu);
    ctx->pc = 0x14EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF54u;
    // 0x14ef58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14E2B8u, 0x14EF54u, 0x14EF5Cu)) {
        return;
    }
    ctx->pc = 0x14EF5Cu;
label_14ef5c:
    // 0x14ef5c: 0xc053c74  jal         func_14F1D0
    ctx->pc = 0x14EF5Cu;
    SET_GPR_U32(ctx, 31, 0x14EF64u);
    ctx->pc = 0x14EF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF5Cu;
    // 0x14ef60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F1D0u, 0x14EF5Cu, 0x14EF64u)) {
        return;
    }
    ctx->pc = 0x14EF64u;
label_14ef64:
    // 0x14ef64: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x14ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x14ef68: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14EF68u;
    SET_GPR_U32(ctx, 31, 0x14EF70u);
    ctx->pc = 0x14EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF68u;
    // 0x14ef6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x14EF68u, 0x14EF70u)) {
        return;
    }
    ctx->pc = 0x14EF70u;
label_14ef70:
    // 0x14ef70: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14ef74: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x14ef74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14ef78: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x14ef7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EF7Cu;
    {
        const bool branch_taken_0x14ef7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF7Cu;
        // 0x14ef80: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef7c) {
            ctx->pc = 0x14EF8Cu;
            goto label_14ef8c;
        }
    }
    ctx->pc = 0x14EF84u;
    // 0x14ef84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x14EF84u;
    SET_GPR_U32(ctx, 31, 0x14EF8Cu);
    ctx->pc = 0x14EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF84u;
    // 0x14ef88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x14EF84u, 0x14EF8Cu)) {
        return;
    }
    ctx->pc = 0x14EF8Cu;
label_14ef8c:
    // 0x14ef8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14ef8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ef90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ef90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ef94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF98u;
        // 0x14ef9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EFA0u;
}
