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

// Function: sub_0030BCC0
// Address: 0x30bcc0 - 0x30c0a8
void sub_0030BCC0_0x30bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BCC0_0x30bcc0");
#endif

    switch (ctx->pc) {
        case 0x30bcf0u: goto label_30bcf0;
        case 0x30bd1cu: goto label_30bd1c;
        case 0x30bd30u: goto label_30bd30;
        case 0x30bd5cu: goto label_30bd5c;
        case 0x30bdd4u: goto label_30bdd4;
        case 0x30be04u: goto label_30be04;
        case 0x30be30u: goto label_30be30;
        case 0x30be70u: goto label_30be70;
        case 0x30be9cu: goto label_30be9c;
        case 0x30bee0u: goto label_30bee0;
        case 0x30bf0cu: goto label_30bf0c;
        case 0x30bf54u: goto label_30bf54;
        case 0x30bf80u: goto label_30bf80;
        case 0x30bfbcu: goto label_30bfbc;
        case 0x30bfe8u: goto label_30bfe8;
        case 0x30c034u: goto label_30c034;
        case 0x30c040u: goto label_30c040;
        case 0x30c04cu: goto label_30c04c;
        case 0x30c058u: goto label_30c058;
        case 0x30c06cu: goto label_30c06c;
        default: break;
    }

    ctx->pc = 0x30bcc0u;

    // 0x30bcc0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x30bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x30bcc4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x30bcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x30bcc8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x30bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x30bccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcd0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x30bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x30bcd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30bcd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcd8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x30bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x30bcdc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30bce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bce4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bce8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BCE8u;
    SET_GPR_U32(ctx, 31, 0x30BCF0u);
    ctx->pc = 0x30BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCE8u;
    // 0x30bcec: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BCE8u, 0x30BCF0u)) {
        return;
    }
    ctx->pc = 0x30BCF0u;
label_30bcf0:
    // 0x30bcf0: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x30BCF0u;
    {
        const bool branch_taken_0x30bcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCF0u;
        // 0x30bcf4: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcf0) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BCF8u;
    // 0x30bcf8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x30bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x30bcfc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30bcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bd00: 0x144300c5  bne         $v0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x30BD00u;
    {
        const bool branch_taken_0x30bd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD00u;
        // 0x30bd04: 0x49c02  srl         $s3, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd00) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BD08u;
    // 0x30bd08: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x30bd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30bd0c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x30BD0Cu;
    {
        const bool branch_taken_0x30bd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD0Cu;
        // 0x30bd10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd0c) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BD14u;
    // 0x30bd14: 0xc0c290a  jal         func_30A428
    ctx->pc = 0x30BD14u;
    SET_GPR_U32(ctx, 31, 0x30BD1Cu);
    ctx->pc = 0x30BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD14u;
    // 0x30bd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30A428u, 0x30BD14u, 0x30BD1Cu)) {
        return;
    }
    ctx->pc = 0x30BD1Cu;
label_30bd1c:
    // 0x30bd1c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x30BD1Cu;
    {
        const bool branch_taken_0x30bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD1Cu;
        // 0x30bd20: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd1c) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BD24u;
    // 0x30bd24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bd28: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BD28u;
    SET_GPR_U32(ctx, 31, 0x30BD30u);
    ctx->pc = 0x30BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD28u;
    // 0x30bd2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BD28u, 0x30BD30u)) {
        return;
    }
    ctx->pc = 0x30BD30u;
label_30bd30:
    // 0x30bd30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30BD30u;
    {
        const bool branch_taken_0x30bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD30u;
        // 0x30bd34: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd30) {
            ctx->pc = 0x30BD68u;
            goto label_30bd68;
        }
    }
    ctx->pc = 0x30BD38u;
    // 0x30bd38: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x30bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30bd3c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bd40: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30BD40u;
    {
        const bool branch_taken_0x30bd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD40u;
        // 0x30bd44: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd40) {
            ctx->pc = 0x30BD68u;
            goto label_30bd68;
        }
    }
    ctx->pc = 0x30BD48u;
    // 0x30bd48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BD48u;
    {
        const bool branch_taken_0x30bd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD48u;
        // 0x30bd4c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd48) {
            ctx->pc = 0x30BD68u;
            goto label_30bd68;
        }
    }
    ctx->pc = 0x30BD50u;
    // 0x30bd50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bd54: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30BD54u;
    SET_GPR_U32(ctx, 31, 0x30BD5Cu);
    ctx->pc = 0x30BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BD54u;
    // 0x30bd58: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30BD54u, 0x30BD5Cu)) {
        return;
    }
    ctx->pc = 0x30BD5Cu;
label_30bd5c:
    // 0x30bd5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BD5Cu;
    {
        const bool branch_taken_0x30bd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD5Cu;
        // 0x30bd60: 0xc7ab0040  lwc1        $f11, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd5c) {
            ctx->pc = 0x30BD70u;
            goto label_30bd70;
        }
    }
    ctx->pc = 0x30BD64u;
    // 0x30bd64: 0x0  nop
    ctx->pc = 0x30bd64u;
    // NOP
label_30bd68:
    // 0x30bd68: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x30BD68u;
    {
        const bool branch_taken_0x30bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD68u;
        // 0x30bd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd68) {
            ctx->pc = 0x30BDECu;
            goto label_30bdec;
        }
    }
    ctx->pc = 0x30BD70u;
label_30bd70:
    // 0x30bd70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bd74: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x30bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30bd78: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x30bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30bd7c: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x30bd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30bd80: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x30bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30bd84: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x30bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30bd88: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x30bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30bd8c: 0xc7a6005c  lwc1        $f6, 0x5C($sp)
    ctx->pc = 0x30bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x30bd90: 0xc7a70060  lwc1        $f7, 0x60($sp)
    ctx->pc = 0x30bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x30bd94: 0xc7a80064  lwc1        $f8, 0x64($sp)
    ctx->pc = 0x30bd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x30bd98: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x30bd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30bd9c: 0xc7aa006c  lwc1        $f10, 0x6C($sp)
    ctx->pc = 0x30bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30bda0: 0xe7ab0000  swc1        $f11, 0x0($sp)
    ctx->pc = 0x30bda0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30bda4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30bda8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x30bda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30bdac: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x30bdacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30bdb0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x30bdb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30bdb4: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x30bdb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30bdb8: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x30bdb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30bdbc: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x30bdbcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x30bdc0: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x30bdc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30bdc4: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x30bdc4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x30bdc8: 0xe7a90034  swc1        $f9, 0x34($sp)
    ctx->pc = 0x30bdc8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30bdcc: 0xc092d94  jal         func_24B650
    ctx->pc = 0x30BDCCu;
    SET_GPR_U32(ctx, 31, 0x30BDD4u);
    ctx->pc = 0x30BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDCCu;
    // 0x30bdd0: 0xe7aa0038  swc1        $f10, 0x38($sp) (Delay Slot)
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x30BDCCu, 0x30BDD4u)) {
        return;
    }
    ctx->pc = 0x30BDD4u;
label_30bdd4:
    // 0x30bdd4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BDD4u;
    {
        const bool branch_taken_0x30bdd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDD4u;
        // 0x30bdd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdd4) {
            ctx->pc = 0x30BDECu;
            goto label_30bdec;
        }
    }
    ctx->pc = 0x30BDDCu;
    // 0x30bddc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30bde0: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x30bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x30bde4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30bde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bdec:
    // 0x30bdec: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x30BDECu;
    {
        const bool branch_taken_0x30bdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDECu;
        // 0x30bdf0: 0x27b1007c  addiu       $s1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdec) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BDF4u;
    // 0x30bdf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bdf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30bdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bdfc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BDFCu;
    SET_GPR_U32(ctx, 31, 0x30BE04u);
    ctx->pc = 0x30BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDFCu;
    // 0x30be00: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BDFCu, 0x30BE04u)) {
        return;
    }
    ctx->pc = 0x30BE04u;
label_30be04:
    // 0x30be04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30BE04u;
    {
        const bool branch_taken_0x30be04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE04u;
        // 0x30be08: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be04) {
            ctx->pc = 0x30BE38u;
            goto label_30be38;
        }
    }
    ctx->pc = 0x30BE0Cu;
    // 0x30be0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30be10: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30be14: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BE14u;
    {
        const bool branch_taken_0x30be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE14u;
        // 0x30be18: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be14) {
            ctx->pc = 0x30BE38u;
            goto label_30be38;
        }
    }
    ctx->pc = 0x30BE1Cu;
    // 0x30be1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BE1Cu;
    {
        const bool branch_taken_0x30be1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE1Cu;
        // 0x30be20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be1c) {
            ctx->pc = 0x30BE38u;
            goto label_30be38;
        }
    }
    ctx->pc = 0x30BE24u;
    // 0x30be24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30be28: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30BE28u;
    SET_GPR_U32(ctx, 31, 0x30BE30u);
    ctx->pc = 0x30BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE28u;
    // 0x30be2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30BE28u, 0x30BE30u)) {
        return;
    }
    ctx->pc = 0x30BE30u;
label_30be30:
    // 0x30be30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BE30u;
    {
        const bool branch_taken_0x30be30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30be30) {
            ctx->pc = 0x30BE40u;
            goto label_30be40;
        }
    }
    ctx->pc = 0x30BE38u;
label_30be38:
    // 0x30be38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BE38u;
    {
        const bool branch_taken_0x30be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE38u;
        // 0x30be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be38) {
            ctx->pc = 0x30BE58u;
            goto label_30be58;
        }
    }
    ctx->pc = 0x30BE40u;
label_30be40:
    // 0x30be40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BE40u;
    {
        const bool branch_taken_0x30be40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE40u;
        // 0x30be44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be40) {
            ctx->pc = 0x30BE58u;
            goto label_30be58;
        }
    }
    ctx->pc = 0x30BE48u;
    // 0x30be48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30be4c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30be50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30be50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30be54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30be58:
    // 0x30be58: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x30BE58u;
    {
        const bool branch_taken_0x30be58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE58u;
        // 0x30be5c: 0x27b10084  addiu       $s1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be58) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BE60u;
    // 0x30be60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30be60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30be64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30be68: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BE68u;
    SET_GPR_U32(ctx, 31, 0x30BE70u);
    ctx->pc = 0x30BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE68u;
    // 0x30be6c: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BE68u, 0x30BE70u)) {
        return;
    }
    ctx->pc = 0x30BE70u;
label_30be70:
    // 0x30be70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30BE70u;
    {
        const bool branch_taken_0x30be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE70u;
        // 0x30be74: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be70) {
            ctx->pc = 0x30BEA8u;
            goto label_30bea8;
        }
    }
    ctx->pc = 0x30BE78u;
    // 0x30be78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30be7c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30be80: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30BE80u;
    {
        const bool branch_taken_0x30be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE80u;
        // 0x30be84: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be80) {
            ctx->pc = 0x30BEA8u;
            goto label_30bea8;
        }
    }
    ctx->pc = 0x30BE88u;
    // 0x30be88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BE88u;
    {
        const bool branch_taken_0x30be88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE88u;
        // 0x30be8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be88) {
            ctx->pc = 0x30BEA8u;
            goto label_30bea8;
        }
    }
    ctx->pc = 0x30BE90u;
    // 0x30be90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30be90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30be94: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30BE94u;
    SET_GPR_U32(ctx, 31, 0x30BE9Cu);
    ctx->pc = 0x30BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE94u;
    // 0x30be98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30BE94u, 0x30BE9Cu)) {
        return;
    }
    ctx->pc = 0x30BE9Cu;
label_30be9c:
    // 0x30be9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BE9Cu;
    {
        const bool branch_taken_0x30be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30be9c) {
            ctx->pc = 0x30BEB0u;
            goto label_30beb0;
        }
    }
    ctx->pc = 0x30BEA4u;
    // 0x30bea4: 0x0  nop
    ctx->pc = 0x30bea4u;
    // NOP
label_30bea8:
    // 0x30bea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BEA8u;
    {
        const bool branch_taken_0x30bea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEA8u;
        // 0x30beac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bea8) {
            ctx->pc = 0x30BEC8u;
            goto label_30bec8;
        }
    }
    ctx->pc = 0x30BEB0u;
label_30beb0:
    // 0x30beb0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BEB0u;
    {
        const bool branch_taken_0x30beb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB0u;
        // 0x30beb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30beb0) {
            ctx->pc = 0x30BEC8u;
            goto label_30bec8;
        }
    }
    ctx->pc = 0x30BEB8u;
    // 0x30beb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30bebc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bec0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30bec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bec8:
    // 0x30bec8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x30BEC8u;
    {
        const bool branch_taken_0x30bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEC8u;
        // 0x30becc: 0x27b1008c  addiu       $s1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bec8) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BED0u;
    // 0x30bed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bed4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30bed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bed8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BED8u;
    SET_GPR_U32(ctx, 31, 0x30BEE0u);
    ctx->pc = 0x30BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BED8u;
    // 0x30bedc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BED8u, 0x30BEE0u)) {
        return;
    }
    ctx->pc = 0x30BEE0u;
label_30bee0:
    // 0x30bee0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30BEE0u;
    {
        const bool branch_taken_0x30bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE0u;
        // 0x30bee4: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bee0) {
            ctx->pc = 0x30BF18u;
            goto label_30bf18;
        }
    }
    ctx->pc = 0x30BEE8u;
    // 0x30bee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30beec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bef0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30BEF0u;
    {
        const bool branch_taken_0x30bef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEF0u;
        // 0x30bef4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bef0) {
            ctx->pc = 0x30BF18u;
            goto label_30bf18;
        }
    }
    ctx->pc = 0x30BEF8u;
    // 0x30bef8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BEF8u;
    {
        const bool branch_taken_0x30bef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEF8u;
        // 0x30befc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bef8) {
            ctx->pc = 0x30BF18u;
            goto label_30bf18;
        }
    }
    ctx->pc = 0x30BF00u;
    // 0x30bf00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bf04: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30BF04u;
    SET_GPR_U32(ctx, 31, 0x30BF0Cu);
    ctx->pc = 0x30BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF04u;
    // 0x30bf08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30BF04u, 0x30BF0Cu)) {
        return;
    }
    ctx->pc = 0x30BF0Cu;
label_30bf0c:
    // 0x30bf0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BF0Cu;
    {
        const bool branch_taken_0x30bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bf0c) {
            ctx->pc = 0x30BF20u;
            goto label_30bf20;
        }
    }
    ctx->pc = 0x30BF14u;
    // 0x30bf14: 0x0  nop
    ctx->pc = 0x30bf14u;
    // NOP
label_30bf18:
    // 0x30bf18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BF18u;
    {
        const bool branch_taken_0x30bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF18u;
        // 0x30bf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf18) {
            ctx->pc = 0x30BF38u;
            goto label_30bf38;
        }
    }
    ctx->pc = 0x30BF20u;
label_30bf20:
    // 0x30bf20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BF20u;
    {
        const bool branch_taken_0x30bf20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF20u;
        // 0x30bf24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf20) {
            ctx->pc = 0x30BF38u;
            goto label_30bf38;
        }
    }
    ctx->pc = 0x30BF28u;
    // 0x30bf28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30bf2c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bf30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30bf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bf38:
    // 0x30bf38: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x30BF38u;
    {
        const bool branch_taken_0x30bf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF38u;
        // 0x30bf3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf38) {
            ctx->pc = 0x30C084u;
            goto label_30c084;
        }
    }
    ctx->pc = 0x30BF40u;
    // 0x30bf40: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x30BF40u;
    {
        const bool branch_taken_0x30bf40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF40u;
        // 0x30bf44: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf40) {
            ctx->pc = 0x30C020u;
            goto label_30c020;
        }
    }
    ctx->pc = 0x30BF48u;
    // 0x30bf48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bf4c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BF4Cu;
    SET_GPR_U32(ctx, 31, 0x30BF54u);
    ctx->pc = 0x30BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF4Cu;
    // 0x30bf50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BF4Cu, 0x30BF54u)) {
        return;
    }
    ctx->pc = 0x30BF54u;
label_30bf54:
    // 0x30bf54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30BF54u;
    {
        const bool branch_taken_0x30bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF54u;
        // 0x30bf58: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf54) {
            ctx->pc = 0x30BF88u;
            goto label_30bf88;
        }
    }
    ctx->pc = 0x30BF5Cu;
    // 0x30bf5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bf60: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bf64: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BF64u;
    {
        const bool branch_taken_0x30bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF64u;
        // 0x30bf68: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf64) {
            ctx->pc = 0x30BF88u;
            goto label_30bf88;
        }
    }
    ctx->pc = 0x30BF6Cu;
    // 0x30bf6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BF6Cu;
    {
        const bool branch_taken_0x30bf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF6Cu;
        // 0x30bf70: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf6c) {
            ctx->pc = 0x30BF88u;
            goto label_30bf88;
        }
    }
    ctx->pc = 0x30BF74u;
    // 0x30bf74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bf78: 0xc092796  jal         func_249E58
    ctx->pc = 0x30BF78u;
    SET_GPR_U32(ctx, 31, 0x30BF80u);
    ctx->pc = 0x30BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF78u;
    // 0x30bf7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30BF78u, 0x30BF80u)) {
        return;
    }
    ctx->pc = 0x30BF80u;
label_30bf80:
    // 0x30bf80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BF80u;
    {
        const bool branch_taken_0x30bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bf80) {
            ctx->pc = 0x30BF90u;
            goto label_30bf90;
        }
    }
    ctx->pc = 0x30BF88u;
label_30bf88:
    // 0x30bf88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BF88u;
    {
        const bool branch_taken_0x30bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF88u;
        // 0x30bf8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf88) {
            ctx->pc = 0x30BFA8u;
            goto label_30bfa8;
        }
    }
    ctx->pc = 0x30BF90u;
label_30bf90:
    // 0x30bf90: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BF90u;
    {
        const bool branch_taken_0x30bf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF90u;
        // 0x30bf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf90) {
            ctx->pc = 0x30BFA8u;
            goto label_30bfa8;
        }
    }
    ctx->pc = 0x30BF98u;
    // 0x30bf98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30bf9c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30bfa0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30bfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bfa8:
    // 0x30bfa8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30BFA8u;
    {
        const bool branch_taken_0x30bfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFA8u;
        // 0x30bfac: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfa8) {
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BFB0u;
    // 0x30bfb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bfb4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30BFB4u;
    SET_GPR_U32(ctx, 31, 0x30BFBCu);
    ctx->pc = 0x30BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BFB4u;
    // 0x30bfb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30BFB4u, 0x30BFBCu)) {
        return;
    }
    ctx->pc = 0x30BFBCu;
label_30bfbc:
    // 0x30bfbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30BFBCu;
    {
        const bool branch_taken_0x30bfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFBCu;
        // 0x30bfc0: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfbc) {
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFC4u;
    // 0x30bfc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bfc8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bfcc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30BFCCu;
    {
        const bool branch_taken_0x30bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFCCu;
        // 0x30bfd0: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfcc) {
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFD4u;
    // 0x30bfd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BFD4u;
    {
        const bool branch_taken_0x30bfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFD4u;
        // 0x30bfd8: 0x27a50072  addiu       $a1, $sp, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd4) {
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFDCu;
    // 0x30bfdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30bfe0: 0xc092796  jal         func_249E58
    ctx->pc = 0x30BFE0u;
    SET_GPR_U32(ctx, 31, 0x30BFE8u);
    ctx->pc = 0x30BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BFE0u;
    // 0x30bfe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E58u, 0x30BFE0u, 0x30BFE8u)) {
        return;
    }
    ctx->pc = 0x30BFE8u;
label_30bfe8:
    // 0x30bfe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BFE8u;
    {
        const bool branch_taken_0x30bfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bfe8) {
            ctx->pc = 0x30BFF8u;
            goto label_30bff8;
        }
    }
    ctx->pc = 0x30BFF0u;
label_30bff0:
    // 0x30bff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30BFF0u;
    {
        const bool branch_taken_0x30bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFF0u;
        // 0x30bff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bff0) {
            ctx->pc = 0x30C010u;
            goto label_30c010;
        }
    }
    ctx->pc = 0x30BFF8u;
label_30bff8:
    // 0x30bff8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BFF8u;
    {
        const bool branch_taken_0x30bff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFF8u;
        // 0x30bffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bff8) {
            ctx->pc = 0x30C010u;
            goto label_30c010;
        }
    }
    ctx->pc = 0x30C000u;
    // 0x30c000: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c004: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x30c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x30c008: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c010:
    // 0x30c010: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C010u;
    {
        const bool branch_taken_0x30c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C010u;
        // 0x30c014: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c010) {
            ctx->pc = 0x30C02Cu;
            goto label_30c02c;
        }
    }
    ctx->pc = 0x30C018u;
label_30c018:
    // 0x30c018: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x30C018u;
    {
        const bool branch_taken_0x30c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C018u;
        // 0x30c01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c018) {
            ctx->pc = 0x30C084u;
            goto label_30c084;
        }
    }
    ctx->pc = 0x30C020u;
label_30c020:
    // 0x30c020: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x30c020u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x30c024: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x30c024u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x30c028: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30c028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30c02c:
    // 0x30c02c: 0xc0aa720  jal         func_2A9C80
    ctx->pc = 0x30C02Cu;
    SET_GPR_U32(ctx, 31, 0x30C034u);
    ctx->pc = 0x30C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C02Cu;
    // 0x30c030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C80u, 0x30C02Cu, 0x30C034u)) {
        return;
    }
    ctx->pc = 0x30C034u;
label_30c034:
    // 0x30c034: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x30c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c038: 0xc0aa71a  jal         func_2A9C68
    ctx->pc = 0x30C038u;
    SET_GPR_U32(ctx, 31, 0x30C040u);
    ctx->pc = 0x30C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C038u;
    // 0x30c03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C68u, 0x30C038u, 0x30C040u)) {
        return;
    }
    ctx->pc = 0x30C040u;
label_30c040:
    // 0x30c040: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x30c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c044: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x30C044u;
    SET_GPR_U32(ctx, 31, 0x30C04Cu);
    ctx->pc = 0x30C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C044u;
    // 0x30c048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x30C044u, 0x30C04Cu)) {
        return;
    }
    ctx->pc = 0x30C04Cu;
label_30c04c:
    // 0x30c04c: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x30c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c050: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x30C050u;
    SET_GPR_U32(ctx, 31, 0x30C058u);
    ctx->pc = 0x30C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C050u;
    // 0x30c054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9DE8u, 0x30C050u, 0x30C058u)) {
        return;
    }
    ctx->pc = 0x30C058u;
label_30c058:
    // 0x30c058: 0x97a20070  lhu         $v0, 0x70($sp)
    ctx->pc = 0x30c058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30c05c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c060: 0x97a50072  lhu         $a1, 0x72($sp)
    ctx->pc = 0x30c060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x30c064: 0xc0aa71c  jal         func_2A9C70
    ctx->pc = 0x30C064u;
    SET_GPR_U32(ctx, 31, 0x30C06Cu);
    ctx->pc = 0x30C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C064u;
    // 0x30c068: 0xa6420058  sh          $v0, 0x58($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C70u, 0x30C064u, 0x30C06Cu)) {
        return;
    }
    ctx->pc = 0x30C06Cu;
label_30c06c:
    // 0x30c06c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C06Cu;
    {
        const bool branch_taken_0x30c06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C06Cu;
        // 0x30c070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c06c) {
            ctx->pc = 0x30C084u;
            goto label_30c084;
        }
    }
    ctx->pc = 0x30C074u;
    // 0x30c074: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c078: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30c07c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c084:
    // 0x30c084: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x30c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30c088: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x30c088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30c08c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x30c08cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30c090: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x30c090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30c094: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30c098: 0x3e00008  jr          $ra
    ctx->pc = 0x30C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C098u;
        // 0x30c09c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0A0u;
    // 0x30c0a0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30c0a4: 0x0  nop
    ctx->pc = 0x30c0a4u;
    // NOP
    ctx->pc = 0x30c0a8u;
}
