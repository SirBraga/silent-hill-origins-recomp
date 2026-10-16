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

// Function: sub_0029D0A0
// Address: 0x29d0a0 - 0x29d130
void sub_0029D0A0_0x29d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0A0_0x29d0a0");
#endif

    switch (ctx->pc) {
        case 0x29d0d4u: goto label_29d0d4;
        case 0x29d0e8u: goto label_29d0e8;
        case 0x29d114u: goto label_29d114;
        default: break;
    }

    ctx->pc = 0x29d0a0u;

    // 0x29d0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0b0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29d0b4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29D0B4u;
    {
        const bool branch_taken_0x29d0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d0b4) {
            ctx->pc = 0x29D0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D0B4u;
            // 0x29d0b8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D0E0u;
            goto label_29d0e0;
        }
    }
    ctx->pc = 0x29D0BCu;
    // 0x29d0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29d0c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29d0c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D0C4u;
    {
        const bool branch_taken_0x29d0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d0c4) {
            ctx->pc = 0x29D0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D0C4u;
            // 0x29d0c8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D0E0u;
            goto label_29d0e0;
        }
    }
    ctx->pc = 0x29D0CCu;
    // 0x29d0cc: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29D0CCu;
    SET_GPR_U32(ctx, 31, 0x29D0D4u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29D0CCu, 0x29D0D4u)) {
        return;
    }
    ctx->pc = 0x29D0D4u;
label_29d0d4:
    // 0x29d0d4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x29d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x29d0d8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x29d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x29d0dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_29d0e0:
    // 0x29d0e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D0E0u;
    {
        const bool branch_taken_0x29d0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0E0u;
        // 0x29d0e4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0e0) {
            ctx->pc = 0x29D104u;
            goto label_29d104;
        }
    }
    ctx->pc = 0x29D0E8u;
label_29d0e8:
    // 0x29d0e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29d0ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d0f0: 0x0  nop
    ctx->pc = 0x29d0f0u;
    // NOP
    // 0x29d0f4: 0x0  nop
    ctx->pc = 0x29d0f4u;
    // NOP
    // 0x29d0f8: 0x0  nop
    ctx->pc = 0x29d0f8u;
    // NOP
    // 0x29d0fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29D0FCu;
    {
        const bool branch_taken_0x29d0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d0fc) {
            ctx->pc = 0x29D0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d0e8;
        }
    }
    ctx->pc = 0x29D104u;
label_29d104:
    // 0x29d104: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D104u;
    {
        const bool branch_taken_0x29d104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d104) {
            ctx->pc = 0x29D108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D104u;
            // 0x29d108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D11Cu;
            goto label_29d11c;
        }
    }
    ctx->pc = 0x29D10Cu;
    // 0x29d10c: 0xc0c5486  jal         func_315218
    ctx->pc = 0x29D10Cu;
    SET_GPR_U32(ctx, 31, 0x29D114u);
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x29D10Cu, 0x29D114u)) {
        return;
    }
    ctx->pc = 0x29D114u;
label_29d114:
    // 0x29d114: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x29d114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x29d118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d11c:
    // 0x29d11c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d124: 0x80a7170  j           func_29C5C0
    ctx->pc = 0x29D124u;
    ctx->pc = 0x29D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D124u;
    // 0x29d128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C5C0u;
    sub_0029C5C0_0x29c5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x29D12Cu;
    // 0x29d12c: 0x0  nop
    ctx->pc = 0x29d12cu;
    // NOP
    ctx->pc = 0x29d130u;
}
