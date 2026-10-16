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

// Function: sub_0019EC80
// Address: 0x19ec80 - 0x19ed38
void sub_0019EC80_0x19ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EC80_0x19ec80");
#endif

    switch (ctx->pc) {
        case 0x19ecb4u: goto label_19ecb4;
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ecd8u: goto label_19ecd8;
        case 0x19ed04u: goto label_19ed04;
        default: break;
    }

    ctx->pc = 0x19ec80u;

    // 0x19ec80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ec84: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ec88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19ec8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x19ec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19ec90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ec90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec94: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x19ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19ec98: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19ec98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19ec9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eca0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19eca4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19eca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ecac: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19ECACu;
    SET_GPR_U32(ctx, 31, 0x19ECB4u);
    ctx->pc = 0x19ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECACu;
    // 0x19ecb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19ECACu, 0x19ECB4u)) {
        return;
    }
    ctx->pc = 0x19ECB4u;
label_19ecb4:
    // 0x19ecb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19ecb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecb8: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19ECB8u;
    SET_GPR_U32(ctx, 31, 0x19ECC0u);
    ctx->pc = 0x19ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECB8u;
    // 0x19ecbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19ECB8u, 0x19ECC0u)) {
        return;
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19ecc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecc8: 0x2463a5b8  addiu       $v1, $v1, -0x5A48
    ctx->pc = 0x19ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944184));
    // 0x19eccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ecd0: 0xc080924  jal         func_202490
    ctx->pc = 0x19ECD0u;
    SET_GPR_U32(ctx, 31, 0x19ECD8u);
    ctx->pc = 0x19ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECD0u;
    // 0x19ecd4: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19ECD0u, 0x19ECD8u)) {
        return;
    }
    ctx->pc = 0x19ECD8u;
label_19ecd8:
    // 0x19ecd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ecd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecdc: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x19ecdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x19ece0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x19ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19ece4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ece8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ecec: 0x2666fff4  addiu       $a2, $s3, -0xC
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x19ecf0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x19ecf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x19ecf4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x19ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x19ecf8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x19ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x19ecfc: 0xc093546  jal         func_24D518
    ctx->pc = 0x19ECFCu;
    SET_GPR_U32(ctx, 31, 0x19ED04u);
    ctx->pc = 0x19ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECFCu;
    // 0x19ed00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x19ECFCu, 0x19ED04u)) {
        return;
    }
    ctx->pc = 0x19ED04u;
label_19ed04:
    // 0x19ed04: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x19ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x19ed08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19ed08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19ed0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ed10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19ed10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ed14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19ed14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ed18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19ed18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ed1c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x19ed1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x19ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED24u;
        // 0x19ed28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ED2Cu;
    // 0x19ed2c: 0x0  nop
    ctx->pc = 0x19ed2cu;
    // NOP
    // 0x19ed30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ed34: 0x0  nop
    ctx->pc = 0x19ed34u;
    // NOP
    ctx->pc = 0x19ed38u;
}
