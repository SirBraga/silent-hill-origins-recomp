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

// Function: sub_0013BC18
// Address: 0x13bc18 - 0x13bcc0
void sub_0013BC18_0x13bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BC18_0x13bc18");
#endif

    switch (ctx->pc) {
        case 0x13bc30u: goto label_13bc30;
        case 0x13bc48u: goto label_13bc48;
        case 0x13bc58u: goto label_13bc58;
        case 0x13bc60u: goto label_13bc60;
        case 0x13bc88u: goto label_13bc88;
        case 0x13bc94u: goto label_13bc94;
        case 0x13bca4u: goto label_13bca4;
        default: break;
    }

    ctx->pc = 0x13bc18u;

    // 0x13bc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13bc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bc20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13bc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13bc28: 0xc0a02e0  jal         func_280B80
    ctx->pc = 0x13BC28u;
    SET_GPR_U32(ctx, 31, 0x13BC30u);
    ctx->pc = 0x13BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC28u;
    // 0x13bc2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280B80u, 0x13BC28u, 0x13BC30u)) {
        return;
    }
    ctx->pc = 0x13BC30u;
label_13bc30:
    // 0x13bc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bc34: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BC34u;
    {
        const bool branch_taken_0x13bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC34u;
        // 0x13bc38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc34) {
            ctx->pc = 0x13BCA8u;
            goto label_13bca8;
        }
    }
    ctx->pc = 0x13BC3Cu;
    // 0x13bc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc40: 0xc0a0376  jal         func_280DD8
    ctx->pc = 0x13BC40u;
    SET_GPR_U32(ctx, 31, 0x13BC48u);
    ctx->pc = 0x13BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC40u;
    // 0x13bc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280DD8u, 0x13BC40u, 0x13BC48u)) {
        return;
    }
    ctx->pc = 0x13BC48u;
label_13bc48:
    // 0x13bc48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13bc4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13bc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13bc50: 0xc0a0392  jal         func_280E48
    ctx->pc = 0x13BC50u;
    SET_GPR_U32(ctx, 31, 0x13BC58u);
    ctx->pc = 0x13BC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC50u;
    // 0x13bc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E48u, 0x13BC50u, 0x13BC58u)) {
        return;
    }
    ctx->pc = 0x13BC58u;
label_13bc58:
    // 0x13bc58: 0xc0a03a6  jal         func_280E98
    ctx->pc = 0x13BC58u;
    SET_GPR_U32(ctx, 31, 0x13BC60u);
    ctx->pc = 0x13BC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC58u;
    // 0x13bc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280E98u, 0x13BC58u, 0x13BC60u)) {
        return;
    }
    ctx->pc = 0x13BC60u;
label_13bc60:
    // 0x13bc60: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BC60u;
    {
        const bool branch_taken_0x13bc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC60u;
        // 0x13bc64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc60) {
            ctx->pc = 0x13BCA8u;
            goto label_13bca8;
        }
    }
    ctx->pc = 0x13BC68u;
    // 0x13bc68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bc6c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x13bc70: 0x2610f3b8  addiu       $s0, $s0, -0xC48
    ctx->pc = 0x13bc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964152));
    // 0x13bc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc78: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x13bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13bc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc80: 0xc0a01bc  jal         func_2806F0
    ctx->pc = 0x13BC80u;
    SET_GPR_U32(ctx, 31, 0x13BC88u);
    ctx->pc = 0x13BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC80u;
    // 0x13bc84: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2806F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2806F0u, 0x13BC80u, 0x13BC88u)) {
        return;
    }
    ctx->pc = 0x13BC88u;
label_13bc88:
    // 0x13bc88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13bc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc8c: 0xc095f6a  jal         func_257DA8
    ctx->pc = 0x13BC8Cu;
    SET_GPR_U32(ctx, 31, 0x13BC94u);
    ctx->pc = 0x13BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC8Cu;
    // 0x13bc90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257DA8u, 0x13BC8Cu, 0x13BC94u)) {
        return;
    }
    ctx->pc = 0x13BC94u;
label_13bc94:
    // 0x13bc94: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13bc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc9c: 0xc041e86  jal         func_107A18
    ctx->pc = 0x13BC9Cu;
    SET_GPR_U32(ctx, 31, 0x13BCA4u);
    ctx->pc = 0x13BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC9Cu;
    // 0x13bca0: 0x2484f3c0  addiu       $a0, $a0, -0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x13BC9Cu, 0x13BCA4u)) {
        return;
    }
    ctx->pc = 0x13BCA4u;
label_13bca4:
    // 0x13bca4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13bca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13bca8:
    // 0x13bca8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13bca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BCB4u;
        // 0x13bcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BCBCu;
    // 0x13bcbc: 0x0  nop
    ctx->pc = 0x13bcbcu;
    // NOP
    ctx->pc = 0x13bcc0u;
}
