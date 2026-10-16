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

// Function: sub_002EEC58
// Address: 0x2eec58 - 0x2eee68
void sub_002EEC58_0x2eec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEC58_0x2eec58");
#endif

    switch (ctx->pc) {
        case 0x2eec90u: goto label_2eec90;
        case 0x2eeca8u: goto label_2eeca8;
        case 0x2eecb8u: goto label_2eecb8;
        case 0x2eecc8u: goto label_2eecc8;
        case 0x2eecf8u: goto label_2eecf8;
        case 0x2eed90u: goto label_2eed90;
        case 0x2eee10u: goto label_2eee10;
        case 0x2eee28u: goto label_2eee28;
        default: break;
    }

    ctx->pc = 0x2eec58u;

    // 0x2eec58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2eec58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2eec5c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2eec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2eec60: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2eec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2eec64: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2eec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2eec68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2eec68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2eec6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec70: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2eec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2eec74: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2eec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2eec78: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2eec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2eec7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eec7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec80: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2eec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2eec84: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2eec84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2eec88: 0xc093546  jal         func_24D518
    ctx->pc = 0x2EEC88u;
    SET_GPR_U32(ctx, 31, 0x2EEC90u);
    ctx->pc = 0x2EEC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC88u;
    // 0x2eec8c: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2EEC88u, 0x2EEC90u)) {
        return;
    }
    ctx->pc = 0x2EEC90u;
label_2eec90:
    // 0x2eec90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC90u;
    {
        const bool branch_taken_0x2eec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC90u;
        // 0x2eec94: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec90) {
            ctx->pc = 0x2EECA0u;
            goto label_2eeca0;
        }
    }
    ctx->pc = 0x2EEC98u;
    // 0x2eec98: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2EEC98u;
    {
        const bool branch_taken_0x2eec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC98u;
        // 0x2eec9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec98) {
            ctx->pc = 0x2EEE3Cu;
            goto label_2eee3c;
        }
    }
    ctx->pc = 0x2EECA0u;
label_2eeca0:
    // 0x2eeca0: 0xc0bba20  jal         func_2EE880
    ctx->pc = 0x2EECA0u;
    SET_GPR_U32(ctx, 31, 0x2EECA8u);
    ctx->pc = 0x2EECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECA0u;
    // 0x2eeca4: 0x24846290  addiu       $a0, $a0, 0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EE880u, 0x2EECA0u, 0x2EECA8u)) {
        return;
    }
    ctx->pc = 0x2EECA8u;
label_2eeca8:
    // 0x2eeca8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EECA8u;
    {
        const bool branch_taken_0x2eeca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECA8u;
        // 0x2eecac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeca8) {
            ctx->pc = 0x2EED68u;
            goto label_2eed68;
        }
    }
    ctx->pc = 0x2EECB0u;
    // 0x2eecb0: 0xc0bbac2  jal         func_2EEB08
    ctx->pc = 0x2EECB0u;
    SET_GPR_U32(ctx, 31, 0x2EECB8u);
    ctx->pc = 0x2EECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECB0u;
    // 0x2eecb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEB08u, 0x2EECB0u, 0x2EECB8u)) {
        return;
    }
    ctx->pc = 0x2EECB8u;
label_2eecb8:
    // 0x2eecb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EECB8u;
    {
        const bool branch_taken_0x2eecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECB8u;
        // 0x2eecbc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecb8) {
            ctx->pc = 0x2EECD0u;
            goto label_2eecd0;
        }
    }
    ctx->pc = 0x2EECC0u;
    // 0x2eecc0: 0xc0bbdb8  jal         func_2EF6E0
    ctx->pc = 0x2EECC0u;
    SET_GPR_U32(ctx, 31, 0x2EECC8u);
    ctx->pc = 0x2EECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECC0u;
    // 0x2eecc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF6E0u, 0x2EECC0u, 0x2EECC8u)) {
        return;
    }
    ctx->pc = 0x2EECC8u;
label_2eecc8:
    // 0x2eecc8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2EECC8u;
    {
        const bool branch_taken_0x2eecc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECC8u;
        // 0x2eeccc: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecc8) {
            ctx->pc = 0x2EEE34u;
            goto label_2eee34;
        }
    }
    ctx->pc = 0x2EECD0u;
label_2eecd0:
    // 0x2eecd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eecd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eecd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eecd8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2eecd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2eecdc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2eecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2eece0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eece4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eece8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eecec: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2eececu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eecf0: 0xc0bbd62  jal         func_2EF588
    ctx->pc = 0x2EECF0u;
    SET_GPR_U32(ctx, 31, 0x2EECF8u);
    ctx->pc = 0x2EECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECF0u;
    // 0x2eecf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF588u, 0x2EECF0u, 0x2EECF8u)) {
        return;
    }
    ctx->pc = 0x2EECF8u;
label_2eecf8:
    // 0x2eecf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eecf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecfc: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x2EECFCu;
    {
        const bool branch_taken_0x2eecfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECFCu;
        // 0x2eed00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecfc) {
            ctx->pc = 0x2EEE2Cu;
            goto label_2eee2c;
        }
    }
    ctx->pc = 0x2EED04u;
    // 0x2eed04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2eed08: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2eed0c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2eed10: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2eed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2eed14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eed14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eed18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eed18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eed1c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2eed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2eed20: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2eed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2eed24: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2eed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2eed28: 0xe6740028  swc1        $f20, 0x28($s3)
    ctx->pc = 0x2eed28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x2eed2c: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x2eed2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2eed30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eed34: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2eed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x2eed38: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2eed38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2eed3c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2eed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2eed40: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2eed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2eed44: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2eed44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2eed48: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2eed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2eed4c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2eed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2eed50: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2eed50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2eed54: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2eed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2eed58: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2eed58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2eed5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EED5Cu;
    {
        const bool branch_taken_0x2eed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED5Cu;
        // 0x2eed60: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed5c) {
            ctx->pc = 0x2EEDF8u;
            goto label_2eedf8;
        }
    }
    ctx->pc = 0x2EED64u;
    // 0x2eed64: 0x0  nop
    ctx->pc = 0x2eed64u;
    // NOP
label_2eed68:
    // 0x2eed68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eed68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eed6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2eed6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eed70: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eed74: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2eed74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x2eed78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eed80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2eed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eed84: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2eed88: 0xc0bbd62  jal         func_2EF588
    ctx->pc = 0x2EED88u;
    SET_GPR_U32(ctx, 31, 0x2EED90u);
    ctx->pc = 0x2EED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED88u;
    // 0x2eed8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF588u, 0x2EED88u, 0x2EED90u)) {
        return;
    }
    ctx->pc = 0x2EED90u;
label_2eed90:
    // 0x2eed90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eed90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed94: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EED94u;
    {
        const bool branch_taken_0x2eed94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED94u;
        // 0x2eed98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed94) {
            ctx->pc = 0x2EEE2Cu;
            goto label_2eee2c;
        }
    }
    ctx->pc = 0x2EED9Cu;
    // 0x2eed9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2eeda0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x2eeda0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2eeda4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2eeda4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2eeda8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2eeda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2eedac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eedacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eedb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eedb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eedb4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2eedb8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x2eedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2eedbc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2eedbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2eedc0: 0xe6740028  swc1        $f20, 0x28($s3)
    ctx->pc = 0x2eedc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x2eedc4: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x2eedc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2eedc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eedc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eedcc: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x2eedccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x2eedd0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2eedd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2eedd4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2eedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2eedd8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2eedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2eeddc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2eeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2eede0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2eede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2eede4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2eede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2eede8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2eede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2eedec: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2eedecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x2eedf0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x2eedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x2eedf4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2eedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_2eedf8:
    // 0x2eedf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2eedfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eee00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eee00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eee04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee08: 0xc0bc056  jal         func_2F0158
    ctx->pc = 0x2EEE08u;
    SET_GPR_U32(ctx, 31, 0x2EEE10u);
    ctx->pc = 0x2EEE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE08u;
    // 0x2eee0c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0158u, 0x2EEE08u, 0x2EEE10u)) {
        return;
    }
    ctx->pc = 0x2EEE10u;
label_2eee10:
    // 0x2eee10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eee14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2eee18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2eee1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2eee1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee20: 0xc0bc056  jal         func_2F0158
    ctx->pc = 0x2EEE20u;
    SET_GPR_U32(ctx, 31, 0x2EEE28u);
    ctx->pc = 0x2EEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE20u;
    // 0x2eee24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0158u, 0x2EEE20u, 0x2EEE28u)) {
        return;
    }
    ctx->pc = 0x2EEE28u;
label_2eee28:
    // 0x2eee28: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2eee2c:
    // 0x2eee2c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2eee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2eee30: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2eee34:
    // 0x2eee34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eee34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee38: 0x2a3100b  movn        $v0, $s5, $v1
    ctx->pc = 0x2eee38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21));
label_2eee3c:
    // 0x2eee3c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2eee3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2eee40: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2eee40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2eee44: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2eee44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2eee48: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2eee48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eee4c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2eee4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2eee50: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2eee50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eee54: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2eee54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eee58: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2eee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE5Cu;
        // 0x2eee60: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE64u;
    // 0x2eee64: 0x0  nop
    ctx->pc = 0x2eee64u;
    // NOP
    ctx->pc = 0x2eee68u;
}
