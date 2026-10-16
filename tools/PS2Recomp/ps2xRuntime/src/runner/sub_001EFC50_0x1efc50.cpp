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

// Function: sub_001EFC50
// Address: 0x1efc50 - 0x1efd78
void sub_001EFC50_0x1efc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC50_0x1efc50");
#endif

    switch (ctx->pc) {
        case 0x1efca0u: goto label_1efca0;
        case 0x1efcb8u: goto label_1efcb8;
        case 0x1efcdcu: goto label_1efcdc;
        case 0x1efcf4u: goto label_1efcf4;
        case 0x1efd10u: goto label_1efd10;
        case 0x1efd40u: goto label_1efd40;
        case 0x1efd58u: goto label_1efd58;
        default: break;
    }

    ctx->pc = 0x1efc50u;

    // 0x1efc50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1efc54: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1efc54u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1efc58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1efc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1efc5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1efc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1efc60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efc68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1efc68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1efc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1efc70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1efc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc74: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1efc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1efc78: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1efc78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efc80: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x1efc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
    // 0x1efc84: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EFC84u;
    {
        const bool branch_taken_0x1efc84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC84u;
        // 0x1efc88: 0xe62c0010  swc1        $f12, 0x10($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc84) {
            ctx->pc = 0x1EFCC0u;
            goto label_1efcc0;
        }
    }
    ctx->pc = 0x1EFC8Cu;
    // 0x1efc8c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1efc90: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1efc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1efc94: 0x26108918  addiu       $s0, $s0, -0x76E8
    ctx->pc = 0x1efc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936856));
    // 0x1efc98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1EFC98u;
    SET_GPR_U32(ctx, 31, 0x1EFCA0u);
    ctx->pc = 0x1EFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC98u;
    // 0x1efc9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1EFC98u, 0x1EFCA0u)) {
        return;
    }
    ctx->pc = 0x1EFCA0u;
label_1efca0:
    // 0x1efca0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1efca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1efca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efca8: 0x9447e836  lhu         $a3, -0x17CA($v0)
    ctx->pc = 0x1efca8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x33E836u));
    // 0x1efcac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcb0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1EFCB0u;
    SET_GPR_U32(ctx, 31, 0x1EFCB8u);
    ctx->pc = 0x1EFCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCB0u;
    // 0x1efcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1EFCB0u, 0x1EFCB8u)) {
        return;
    }
    ctx->pc = 0x1EFCB8u;
label_1efcb8:
    // 0x1efcb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EFCB8u;
    {
        const bool branch_taken_0x1efcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efcb8) {
            ctx->pc = 0x1EFCF4u;
            goto label_1efcf4;
        }
    }
    ctx->pc = 0x1EFCC0u;
label_1efcc0:
    // 0x1efcc0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1efcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efcc8: 0x26108918  addiu       $s0, $s0, -0x76E8
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936856));
    // 0x1efccc: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1efcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x1efcd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcd4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1EFCD4u;
    SET_GPR_U32(ctx, 31, 0x1EFCDCu);
    ctx->pc = 0x1EFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCD4u;
    // 0x1efcd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1EFCD4u, 0x1EFCDCu)) {
        return;
    }
    ctx->pc = 0x1EFCDCu;
label_1efcdc:
    // 0x1efcdc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1efce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efce4: 0x9447e834  lhu         $a3, -0x17CC($v0)
    ctx->pc = 0x1efce4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x33E834u));
    // 0x1efce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1EFCECu;
    SET_GPR_U32(ctx, 31, 0x1EFCF4u);
    ctx->pc = 0x1EFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCECu;
    // 0x1efcf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1EFCECu, 0x1EFCF4u)) {
        return;
    }
    ctx->pc = 0x1EFCF4u;
label_1efcf4:
    // 0x1efcf4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFCF4u;
    {
        const bool branch_taken_0x1efcf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCF4u;
        // 0x1efcf8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcf4) {
            ctx->pc = 0x1EFD48u;
            goto label_1efd48;
        }
    }
    ctx->pc = 0x1EFCFCu;
    // 0x1efcfc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1efcfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1efd00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EFD00u;
    {
        const bool branch_taken_0x1efd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd00) {
            ctx->pc = 0x1EFD48u;
            goto label_1efd48;
        }
    }
    ctx->pc = 0x1EFD08u;
    // 0x1efd08: 0xc07c2f4  jal         func_1F0BD0
    ctx->pc = 0x1EFD08u;
    SET_GPR_U32(ctx, 31, 0x1EFD10u);
    ctx->pc = 0x1EFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD08u;
    // 0x1efd0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0BD0u, 0x1EFD08u, 0x1EFD10u)) {
        return;
    }
    ctx->pc = 0x1EFD10u;
label_1efd10:
    // 0x1efd10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1efd14: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1efd18: 0x8c63f8b8  lw          $v1, -0x748($v1)
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF8B8u));
    // 0x1efd1c: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1efd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1efd20: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFD20u;
    {
        const bool branch_taken_0x1efd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD20u;
        // 0x1efd24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd20) {
            ctx->pc = 0x1EFD44u;
            goto label_1efd44;
        }
    }
    ctx->pc = 0x1EFD28u;
    // 0x1efd28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efd2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFD2Cu;
    {
        const bool branch_taken_0x1efd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD2Cu;
        // 0x1efd30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd2c) {
            ctx->pc = 0x1EFD40u;
            goto label_1efd40;
        }
    }
    ctx->pc = 0x1EFD34u;
    // 0x1efd34: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1efd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1efd38: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1EFD38u;
    SET_GPR_U32(ctx, 31, 0x1EFD40u);
    ctx->pc = 0x1EFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD38u;
    // 0x1efd3c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1EFD38u, 0x1EFD40u)) {
        return;
    }
    ctx->pc = 0x1EFD40u;
label_1efd40:
    // 0x1efd40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efd44:
    // 0x1efd44: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1efd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_1efd48:
    // 0x1efd48: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFD48u;
    {
        const bool branch_taken_0x1efd48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD48u;
        // 0x1efd4c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd48) {
            ctx->pc = 0x1EFD5Cu;
            goto label_1efd5c;
        }
    }
    ctx->pc = 0x1EFD50u;
    // 0x1efd50: 0xc075d7e  jal         func_1D75F8
    ctx->pc = 0x1EFD50u;
    SET_GPR_U32(ctx, 31, 0x1EFD58u);
    ctx->pc = 0x1D75F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75F8u, 0x1EFD50u, 0x1EFD58u)) {
        return;
    }
    ctx->pc = 0x1EFD58u;
label_1efd58:
    // 0x1efd58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1efd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1efd5c:
    // 0x1efd5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1efd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efd60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1efd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efd64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1efd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efd68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1efd68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efd6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efd70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD70u;
        // 0x1efd74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFD78u;
}
