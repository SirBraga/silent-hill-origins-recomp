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

// Function: sub_00190998
// Address: 0x190998 - 0x190a68
void sub_00190998_0x190998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190998_0x190998");
#endif

    switch (ctx->pc) {
        case 0x1909c8u: goto label_1909c8;
        case 0x190a24u: goto label_190a24;
        case 0x190a44u: goto label_190a44;
        case 0x190a50u: goto label_190a50;
        default: break;
    }

    ctx->pc = 0x190998u;

    // 0x190998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19099c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1909a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1909a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1909a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1909a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1909a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1909ac: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1909b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1909b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1909b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1909b8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1909B8u;
    {
        const bool branch_taken_0x1909b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909B8u;
        // 0x1909bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909b8) {
            ctx->pc = 0x1909E0u;
            goto label_1909e0;
        }
    }
    ctx->pc = 0x1909C0u;
    // 0x1909c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1909c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1909c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1909c8:
    // 0x1909c8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1909C8u;
    {
        const bool branch_taken_0x1909c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1909c8) {
            ctx->pc = 0x1909E4u;
            goto label_1909e4;
        }
    }
    ctx->pc = 0x1909D0u;
    // 0x1909d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1909d4: 0x0  nop
    ctx->pc = 0x1909d4u;
    // NOP
    // 0x1909d8: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1909D8u;
    {
        const bool branch_taken_0x1909d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1909d8) {
            ctx->pc = 0x1909DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909D8u;
            // 0x1909dc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1909C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1909c8;
        }
    }
    ctx->pc = 0x1909E0u;
label_1909e0:
    // 0x1909e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1909e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1909e4:
    // 0x1909e4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1909E4u;
    {
        const bool branch_taken_0x1909e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1909e4) {
            ctx->pc = 0x1909E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909E4u;
            // 0x1909e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190A34u;
            goto label_190a34;
        }
    }
    ctx->pc = 0x1909ECu;
    // 0x1909ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1909f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1909F0u;
    {
        const bool branch_taken_0x1909f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1909F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F0u;
        // 0x1909f4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909f0) {
            ctx->pc = 0x190A00u;
            goto label_190a00;
        }
    }
    ctx->pc = 0x1909F8u;
    // 0x1909f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1909F8u;
    {
        const bool branch_taken_0x1909f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F8u;
        // 0x1909fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909f8) {
            ctx->pc = 0x190A04u;
            goto label_190a04;
        }
    }
    ctx->pc = 0x190A00u;
label_190a00:
    // 0x190a00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x190a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_190a04:
    // 0x190a04: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190a08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190A08u;
    {
        const bool branch_taken_0x190a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A08u;
        // 0x190a0c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a08) {
            ctx->pc = 0x190A18u;
            goto label_190a18;
        }
    }
    ctx->pc = 0x190A10u;
    // 0x190a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190A10u;
    {
        const bool branch_taken_0x190a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A10u;
        // 0x190a14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a10) {
            ctx->pc = 0x190A1Cu;
            goto label_190a1c;
        }
    }
    ctx->pc = 0x190A18u;
label_190a18:
    // 0x190a18: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x190a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_190a1c:
    // 0x190a1c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190A1Cu;
    SET_GPR_U32(ctx, 31, 0x190A24u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190A1Cu, 0x190A24u)) {
        return;
    }
    ctx->pc = 0x190A24u;
label_190a24:
    // 0x190a24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x190a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190a28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190a2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x190a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x190a30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190a34:
    // 0x190a34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190A34u;
    {
        const bool branch_taken_0x190a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a34) {
            ctx->pc = 0x190A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A34u;
            // 0x190a38: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190A48u;
            goto label_190a48;
        }
    }
    ctx->pc = 0x190A3Cu;
    // 0x190a3c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x190A3Cu;
    SET_GPR_U32(ctx, 31, 0x190A44u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x190A3Cu, 0x190A44u)) {
        return;
    }
    ctx->pc = 0x190A44u;
label_190a44:
    // 0x190a44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x190a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_190a48:
    // 0x190a48: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x190A48u;
    SET_GPR_U32(ctx, 31, 0x190A50u);
    ctx->pc = 0x190A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A48u;
    // 0x190a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x190A48u, 0x190A50u)) {
        return;
    }
    ctx->pc = 0x190A50u;
label_190a50:
    // 0x190a50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190a54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190a60: 0x3e00008  jr          $ra
    ctx->pc = 0x190A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A60u;
        // 0x190a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A68u;
}
