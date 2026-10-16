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

// Function: sub_001259D8
// Address: 0x1259d8 - 0x125ad0
void sub_001259D8_0x1259d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001259D8_0x1259d8");
#endif

    switch (ctx->pc) {
        case 0x125a20u: goto label_125a20;
        case 0x125a68u: goto label_125a68;
        case 0x125a74u: goto label_125a74;
        default: break;
    }

    ctx->pc = 0x1259d8u;

    // 0x1259d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1259dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1259dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1259e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1259e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1259e4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1259e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1259e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1259e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1259ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1259f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1259f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1259f4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1259f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1259f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1259f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1259fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1259fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x125a00: 0x8e340f84  lw          $s4, 0xF84($s1)
    ctx->pc = 0x125a00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3972)));
    // 0x125a04: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x125A04u;
    {
        const bool branch_taken_0x125a04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A04u;
        // 0x125a08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a04) {
            ctx->pc = 0x125AA4u;
            goto label_125aa4;
        }
    }
    ctx->pc = 0x125A0Cu;
    // 0x125a0c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x125a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125a10: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x125a14: 0x26320ffc  addiu       $s2, $s1, 0xFFC
    ctx->pc = 0x125a14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4092));
    // 0x125a18: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x125a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125a1c: 0x0  nop
    ctx->pc = 0x125a1cu;
    // NOP
label_125a20:
    // 0x125a20: 0x8e220f84  lw          $v0, 0xF84($s1)
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3972)));
    // 0x125a24: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x125a24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125a28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x125A28u;
    {
        const bool branch_taken_0x125a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A28u;
        // 0x125a2c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a28) {
            ctx->pc = 0x125A34u;
            goto label_125a34;
        }
    }
    ctx->pc = 0x125A30u;
    // 0x125a30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_125a34:
    // 0x125a34: 0x54950017  bnel        $a0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x125A34u;
    {
        const bool branch_taken_0x125a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x125a34) {
            ctx->pc = 0x125A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A34u;
            // 0x125a38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A94u;
            goto label_125a94;
        }
    }
    ctx->pc = 0x125A3Cu;
    // 0x125a3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x125A3Cu;
    {
        const bool branch_taken_0x125a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A3Cu;
        // 0x125a40: 0x26220f84  addiu       $v0, $s1, 0xF84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3972));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a3c) {
            ctx->pc = 0x125A50u;
            goto label_125a50;
        }
    }
    ctx->pc = 0x125A44u;
    // 0x125a44: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x125a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125A48u;
    {
        const bool branch_taken_0x125a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A48u;
        // 0x125a4c: 0x24470034  addiu       $a3, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a48) {
            ctx->pc = 0x125A54u;
            goto label_125a54;
        }
    }
    ctx->pc = 0x125A50u;
label_125a50:
    // 0x125a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125a54:
    // 0x125a54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a58: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x125a5c: 0x26c6be18  addiu       $a2, $s6, -0x41E8
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950424));
    // 0x125a60: 0xc0c4f9a  jal         func_313E68
    ctx->pc = 0x125A60u;
    SET_GPR_U32(ctx, 31, 0x125A68u);
    ctx->pc = 0x125A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A60u;
    // 0x125a64: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313E68u, 0x125A60u, 0x125A68u)) {
        return;
    }
    ctx->pc = 0x125A68u;
label_125a68:
    // 0x125a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a6c: 0xc0406e8  jal         func_101BA0
    ctx->pc = 0x125A6Cu;
    SET_GPR_U32(ctx, 31, 0x125A74u);
    ctx->pc = 0x125A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A6Cu;
    // 0x125a70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101BA0u, 0x125A6Cu, 0x125A74u)) {
        return;
    }
    ctx->pc = 0x125A74u;
label_125a74:
    // 0x125a74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a78: 0x50750006  beql        $v1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A78u;
            // 0x125a7c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A94u;
            goto label_125a94;
        }
    }
    ctx->pc = 0x125A80u;
    // 0x125a80: 0x8e220f84  lw          $v0, 0xF84($s1)
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3972)));
    // 0x125a84: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x125a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125a88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125A88u;
            // 0x125a8c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125A90u;
            goto label_125a90;
        }
    }
    ctx->pc = 0x125A90u;
label_125a90:
    // 0x125a90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_125a94:
    // 0x125a94: 0x26520078  addiu       $s2, $s2, 0x78
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x125a98: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x125a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x125a9c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x125A9Cu;
    {
        const bool branch_taken_0x125a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A9Cu;
        // 0x125aa0: 0x26730078  addiu       $s3, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a9c) {
            ctx->pc = 0x125A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a20;
        }
    }
    ctx->pc = 0x125AA4u;
label_125aa4:
    // 0x125aa4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x125aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125aa8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125aac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x125aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125ab0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x125ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125ab4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x125ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125ab8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125abc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x125AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125AC4u;
        // 0x125ac8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125ACCu;
    // 0x125acc: 0x0  nop
    ctx->pc = 0x125accu;
    // NOP
    ctx->pc = 0x125ad0u;
}
