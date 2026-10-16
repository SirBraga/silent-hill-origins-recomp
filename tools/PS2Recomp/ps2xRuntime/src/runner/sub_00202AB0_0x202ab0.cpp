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

// Function: sub_00202AB0
// Address: 0x202ab0 - 0x202b60
void sub_00202AB0_0x202ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202AB0_0x202ab0");
#endif

    switch (ctx->pc) {
        case 0x202af0u: goto label_202af0;
        default: break;
    }

    ctx->pc = 0x202ab0u;

    // 0x202ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202abc: 0x18a00024  blez        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x202ABCu;
    {
        const bool branch_taken_0x202abc = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x202AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ABCu;
        // 0x202ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202abc) {
            ctx->pc = 0x202B50u;
            goto label_202b50;
        }
    }
    ctx->pc = 0x202AC4u;
    // 0x202ac4: 0x28a20041  slti        $v0, $a1, 0x41
    ctx->pc = 0x202ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x202ac8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x202AC8u;
    {
        const bool branch_taken_0x202ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AC8u;
        // 0x202acc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ac8) {
            ctx->pc = 0x202B4Cu;
            goto label_202b4c;
        }
    }
    ctx->pc = 0x202AD0u;
    // 0x202ad0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x202ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x202ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202ad8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x202ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202adc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x202adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202ae0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x202AE0u;
    {
        const bool branch_taken_0x202ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ae0) {
            ctx->pc = 0x202AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AE0u;
            // 0x202ae4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202B00u;
            goto label_202b00;
        }
    }
    ctx->pc = 0x202AE8u;
    // 0x202ae8: 0xc080b2e  jal         func_202CB8
    ctx->pc = 0x202AE8u;
    SET_GPR_U32(ctx, 31, 0x202AF0u);
    ctx->pc = 0x202AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202AE8u;
    // 0x202aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202CB8u, 0x202AE8u, 0x202AF0u)) {
        return;
    }
    ctx->pc = 0x202AF0u;
label_202af0:
    // 0x202af0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x202af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202af4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x202AF4u;
    {
        const bool branch_taken_0x202af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF4u;
        // 0x202af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202af4) {
            ctx->pc = 0x202B50u;
            goto label_202b50;
        }
    }
    ctx->pc = 0x202AFCu;
    // 0x202afc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x202afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_202b00:
    // 0x202b00: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x202b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x202b04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202b08: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x202b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202b0c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x202b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x202b10: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202b14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x202b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x202b18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x202b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202b1c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x202b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x202b20: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x202b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x202b24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202B24u;
    {
        const bool branch_taken_0x202b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B24u;
        // 0x202b28: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b24) {
            ctx->pc = 0x202B30u;
            goto label_202b30;
        }
    }
    ctx->pc = 0x202B2Cu;
    // 0x202b2c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x202b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_202b30:
    // 0x202b30: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x202b34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202b38: 0x8ca30280  lw          $v1, 0x280($a1)
    ctx->pc = 0x202b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0280u));
    // 0x202b3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x202b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202b44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202B44u;
    {
        const bool branch_taken_0x202b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B44u;
        // 0x202b48: 0xaca30280  sw          $v1, 0x280($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b44) {
            ctx->pc = 0x202B50u;
            goto label_202b50;
        }
    }
    ctx->pc = 0x202B4Cu;
label_202b4c:
    // 0x202b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202b50:
    // 0x202b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x202b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202b58: 0x3e00008  jr          $ra
    ctx->pc = 0x202B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B58u;
        // 0x202b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B60u;
}
