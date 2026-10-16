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

// Function: sub_001B4BD0
// Address: 0x1b4bd0 - 0x1b4c98
void sub_001B4BD0_0x1b4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4BD0_0x1b4bd0");
#endif

    switch (ctx->pc) {
        case 0x1b4c24u: goto label_1b4c24;
        case 0x1b4c34u: goto label_1b4c34;
        case 0x1b4c48u: goto label_1b4c48;
        case 0x1b4c70u: goto label_1b4c70;
        case 0x1b4c84u: goto label_1b4c84;
        default: break;
    }

    ctx->pc = 0x1b4bd0u;

    // 0x1b4bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4bd4: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1b4bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1b4bd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b4be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bec: 0x2442c380  addiu       $v0, $v0, -0x3C80
    ctx->pc = 0x1b4becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x1b4bf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b4bf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b4bf8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b4bfc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b4c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b4c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b4c08: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1b4c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b4c0c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1b4c10: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1b4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1b4c14: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1b4c18: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1b4c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1b4c1c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C24u);
    ctx->pc = 0x1B4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C1Cu;
    // 0x1b4c20: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4C1Cu, 0x1B4C24u)) {
        return;
    }
    ctx->pc = 0x1B4C24u;
label_1b4c24:
    // 0x1b4c24: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1b4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1b4c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c2c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B4C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C34u);
    ctx->pc = 0x1B4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C2Cu;
    // 0x1b4c30: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B4C2Cu, 0x1B4C34u)) {
        return;
    }
    ctx->pc = 0x1B4C34u;
label_1b4c34:
    // 0x1b4c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b4c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C40u;
        // 0x1b4c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C48u;
label_1b4c48:
    // 0x1b4c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4c4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b4c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4c54: 0x2442c380  addiu       $v0, $v0, -0x3C80
    ctx->pc = 0x1b4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x1b4c58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b4c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c68: 0xc06d326  jal         func_1B4C98
    ctx->pc = 0x1B4C68u;
    SET_GPR_U32(ctx, 31, 0x1B4C70u);
    ctx->pc = 0x1B4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C68u;
    // 0x1b4c6c: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4C98u, 0x1B4C68u, 0x1B4C70u)) {
        return;
    }
    ctx->pc = 0x1B4C70u;
label_1b4c70:
    // 0x1b4c70: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1b4c70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1b4c74: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4C74u;
    {
        const bool branch_taken_0x1b4c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C74u;
        // 0x1b4c78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c74) {
            ctx->pc = 0x1B4C88u;
            goto label_1b4c88;
        }
    }
    ctx->pc = 0x1B4C7Cu;
    // 0x1b4c7c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B4C84u);
    ctx->pc = 0x1B4C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C7Cu;
    // 0x1b4c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B4C7Cu, 0x1B4C84u)) {
        return;
    }
    ctx->pc = 0x1B4C84u;
label_1b4c84:
    // 0x1b4c84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b4c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4c88:
    // 0x1b4c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C90u;
        // 0x1b4c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C98u;
}
