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

// Function: sub_0010BCA8
// Address: 0x10bca8 - 0x10c0a0
void sub_0010BCA8_0x10bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BCA8_0x10bca8");
#endif

    switch (ctx->pc) {
        case 0x10bd08u: goto label_10bd08;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd6cu: goto label_10bd6c;
        case 0x10bdc0u: goto label_10bdc0;
        case 0x10be54u: goto label_10be54;
        case 0x10be6cu: goto label_10be6c;
        case 0x10be80u: goto label_10be80;
        case 0x10be94u: goto label_10be94;
        case 0x10bea8u: goto label_10bea8;
        case 0x10bec0u: goto label_10bec0;
        case 0x10bed8u: goto label_10bed8;
        case 0x10bef0u: goto label_10bef0;
        case 0x10bf04u: goto label_10bf04;
        case 0x10bf18u: goto label_10bf18;
        case 0x10bf2cu: goto label_10bf2c;
        case 0x10bf40u: goto label_10bf40;
        case 0x10bf58u: goto label_10bf58;
        case 0x10bf70u: goto label_10bf70;
        case 0x10bf88u: goto label_10bf88;
        case 0x10bf9cu: goto label_10bf9c;
        case 0x10bfb4u: goto label_10bfb4;
        case 0x10bfccu: goto label_10bfcc;
        case 0x10bfe4u: goto label_10bfe4;
        case 0x10bffcu: goto label_10bffc;
        case 0x10c018u: goto label_10c018;
        case 0x10c034u: goto label_10c034;
        case 0x10c04cu: goto label_10c04c;
        case 0x10c064u: goto label_10c064;
        default: break;
    }

    ctx->pc = 0x10bca8u;

    // 0x10bca8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10bcac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10bcb0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x10bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x10bcb4: 0x2463a198  addiu       $v1, $v1, -0x5E68
    ctx->pc = 0x10bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943128));
    // 0x10bcb8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x10bcb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bcbc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10bcc0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10bcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bcc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10bccc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bcd0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10bcd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x10bcd8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x10bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x10bcdc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x10bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x10bce0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x10bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x10bce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bce8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x10bce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x10bcec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x10bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x10bcf0: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x10bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x10bcf4: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x10bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x10bcf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bcfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bd00: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10bd04: 0x0  nop
    ctx->pc = 0x10bd04u;
    // NOP
label_10bd08:
    // 0x10bd08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10bd0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10bd10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10bd14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x10bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x10bd18: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x10bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x10bd1c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x10bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x10bd20: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x10bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10bd24: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x10bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x10bd28: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x10bd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x10bd2c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x10bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x10bd30: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x10bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x10bd34: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x10bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x10bd38: 0x1464fff3  bne         $v1, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10BD38u;
    {
        const bool branch_taken_0x10bd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD38u;
        // 0x10bd3c: 0x2442002c  addiu       $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd38) {
            ctx->pc = 0x10BD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bd08;
        }
    }
    ctx->pc = 0x10BD40u;
    // 0x10bd40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bd44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10bd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10bd48: 0x27d00b20  addiu       $s0, $fp, 0xB20
    ctx->pc = 0x10bd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 2848));
    // 0x10bd4c: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x10bd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10bd50: 0x27d71248  addiu       $s7, $fp, 0x1248
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4680));
    // 0x10bd54: 0x27d612d0  addiu       $s6, $fp, 0x12D0
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4816));
    // 0x10bd58: 0x27d51358  addiu       $s5, $fp, 0x1358
    ctx->pc = 0x10bd58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4952));
    // 0x10bd5c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bd60:
    // 0x10bd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd64: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10BD64u;
    SET_GPR_U32(ctx, 31, 0x10BD6Cu);
    ctx->pc = 0x10BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD64u;
    // 0x10bd68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10BD64u, 0x10BD6Cu)) {
        return;
    }
    ctx->pc = 0x10BD6Cu;
label_10bd6c:
    // 0x10bd6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10bd70: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10bd74: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x10bd74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10bd78: 0x1632fff9  bne         $s1, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10BD78u;
    {
        const bool branch_taken_0x10bd78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x10BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD78u;
        // 0x10bd7c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd78) {
            ctx->pc = 0x10BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bd60;
        }
    }
    ctx->pc = 0x10BD80u;
    // 0x10bd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10bd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10bd88: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x10bd8c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x10bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x10bd90: 0x2610a018  addiu       $s0, $s0, -0x5FE8
    ctx->pc = 0x10bd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942744));
    // 0x10bd94: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x10bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x10bd98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10bd98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10bd9c: 0xe7c00010  swc1        $f0, 0x10($fp)
    ctx->pc = 0x10bd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 16), bits); }
    // 0x10bda0: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x10bda0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x10bda4: 0xe7c00014  swc1        $f0, 0x14($fp)
    ctx->pc = 0x10bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 20), bits); }
    // 0x10bda8: 0x26524328  addiu       $s2, $s2, 0x4328
    ctx->pc = 0x10bda8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17192));
    // 0x10bdac: 0xe7c00018  swc1        $f0, 0x18($fp)
    ctx->pc = 0x10bdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 24), bits); }
    // 0x10bdb0: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x10bdb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x10bdb4: 0xe7c0001c  swc1        $f0, 0x1C($fp)
    ctx->pc = 0x10bdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 28), bits); }
    // 0x10bdb8: 0xc06036a  jal         func_180DA8
    ctx->pc = 0x10BDB8u;
    SET_GPR_U32(ctx, 31, 0x10BDC0u);
    ctx->pc = 0x10BDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDB8u;
    // 0x10bdbc: 0x26734330  addiu       $s3, $s3, 0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DA8u, 0x10BDB8u, 0x10BDC0u)) {
        return;
    }
    ctx->pc = 0x10BDC0u;
label_10bdc0:
    // 0x10bdc0: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x10bdc0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x10bdc4: 0xa3c01248  sb          $zero, 0x1248($fp)
    ctx->pc = 0x10bdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4680), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bdc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bdcc: 0xaee00084  sw          $zero, 0x84($s7)
    ctx->pc = 0x10bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 132), GPR_U32(ctx, 0));
    // 0x10bdd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bdd4: 0xaee00080  sw          $zero, 0x80($s7)
    ctx->pc = 0x10bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 128), GPR_U32(ctx, 0));
    // 0x10bdd8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x10bdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10bddc: 0xa3c012d0  sb          $zero, 0x12D0($fp)
    ctx->pc = 0x10bddcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4816), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bde0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10bde4: 0xaec00084  sw          $zero, 0x84($s6)
    ctx->pc = 0x10bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 132), GPR_U32(ctx, 0));
    // 0x10bde8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10bdec: 0xaec00080  sw          $zero, 0x80($s6)
    ctx->pc = 0x10bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 0));
    // 0x10bdf0: 0x24844318  addiu       $a0, $a0, 0x4318
    ctx->pc = 0x10bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17176));
    // 0x10bdf4: 0xa3c01358  sb          $zero, 0x1358($fp)
    ctx->pc = 0x10bdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bdf8: 0x24a5a000  addiu       $a1, $a1, -0x6000
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942720));
    // 0x10bdfc: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x10bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
    // 0x10be00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10be00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be04: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x10be04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    // 0x10be08: 0x26944338  addiu       $s4, $s4, 0x4338
    ctx->pc = 0x10be08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17208));
    // 0x10be0c: 0xafc0122c  sw          $zero, 0x122C($fp)
    ctx->pc = 0x10be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4652), GPR_U32(ctx, 0));
    // 0x10be10: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x10be10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x10be14: 0xafc01230  sw          $zero, 0x1230($fp)
    ctx->pc = 0x10be14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4656), GPR_U32(ctx, 0));
    // 0x10be18: 0x26314358  addiu       $s1, $s1, 0x4358
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17240));
    // 0x10be1c: 0xafc01228  sw          $zero, 0x1228($fp)
    ctx->pc = 0x10be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4648), GPR_U32(ctx, 0));
    // 0x10be20: 0xafc01234  sw          $zero, 0x1234($fp)
    ctx->pc = 0x10be20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4660), GPR_U32(ctx, 0));
    // 0x10be24: 0xafc01244  sw          $zero, 0x1244($fp)
    ctx->pc = 0x10be24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4676), GPR_U32(ctx, 0));
    // 0x10be28: 0xafc013e0  sw          $zero, 0x13E0($fp)
    ctx->pc = 0x10be28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5088), GPR_U32(ctx, 0));
    // 0x10be2c: 0xafc013e4  sw          $zero, 0x13E4($fp)
    ctx->pc = 0x10be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5092), GPR_U32(ctx, 0));
    // 0x10be30: 0xafc013e8  sw          $zero, 0x13E8($fp)
    ctx->pc = 0x10be30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5096), GPR_U32(ctx, 0));
    // 0x10be34: 0xafc013ec  sw          $zero, 0x13EC($fp)
    ctx->pc = 0x10be34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5100), GPR_U32(ctx, 0));
    // 0x10be38: 0xafc013f4  sw          $zero, 0x13F4($fp)
    ctx->pc = 0x10be38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5108), GPR_U32(ctx, 0));
    // 0x10be3c: 0xafc013f0  sw          $zero, 0x13F0($fp)
    ctx->pc = 0x10be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5104), GPR_U32(ctx, 0));
    // 0x10be40: 0xafc3123c  sw          $v1, 0x123C($fp)
    ctx->pc = 0x10be40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4668), GPR_U32(ctx, 3));
    // 0x10be44: 0xafc21240  sw          $v0, 0x1240($fp)
    ctx->pc = 0x10be44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4672), GPR_U32(ctx, 2));
    // 0x10be48: 0xafc21224  sw          $v0, 0x1224($fp)
    ctx->pc = 0x10be48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4644), GPR_U32(ctx, 2));
    // 0x10be4c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BE4Cu;
    SET_GPR_U32(ctx, 31, 0x10BE54u);
    ctx->pc = 0x10BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE4Cu;
    // 0x10be50: 0xafc71238  sw          $a3, 0x1238($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4664), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BE4Cu, 0x10BE54u)) {
        return;
    }
    ctx->pc = 0x10BE54u;
label_10be54:
    // 0x10be54: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10be54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10be58: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10be58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10be5c: 0x24a5a020  addiu       $a1, $a1, -0x5FE0
    ctx->pc = 0x10be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942752));
    // 0x10be60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10be60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be64: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BE64u;
    SET_GPR_U32(ctx, 31, 0x10BE6Cu);
    ctx->pc = 0x10BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE64u;
    // 0x10be68: 0x24844320  addiu       $a0, $a0, 0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BE64u, 0x10BE6Cu)) {
        return;
    }
    ctx->pc = 0x10BE6Cu;
label_10be6c:
    // 0x10be6c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10be70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10be70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be74: 0x24a5a038  addiu       $a1, $a1, -0x5FC8
    ctx->pc = 0x10be74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942776));
    // 0x10be78: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BE78u;
    SET_GPR_U32(ctx, 31, 0x10BE80u);
    ctx->pc = 0x10BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE78u;
    // 0x10be7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BE78u, 0x10BE80u)) {
        return;
    }
    ctx->pc = 0x10BE80u;
label_10be80:
    // 0x10be80: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10be80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10be84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be88: 0x24a5a048  addiu       $a1, $a1, -0x5FB8
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
    // 0x10be8c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BE8Cu;
    SET_GPR_U32(ctx, 31, 0x10BE94u);
    ctx->pc = 0x10BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE8Cu;
    // 0x10be90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BE8Cu, 0x10BE94u)) {
        return;
    }
    ctx->pc = 0x10BE94u;
label_10be94:
    // 0x10be94: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10be98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be9c: 0x24a5a060  addiu       $a1, $a1, -0x5FA0
    ctx->pc = 0x10be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
    // 0x10bea0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BEA0u;
    SET_GPR_U32(ctx, 31, 0x10BEA8u);
    ctx->pc = 0x10BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEA0u;
    // 0x10bea4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BEA0u, 0x10BEA8u)) {
        return;
    }
    ctx->pc = 0x10BEA8u;
label_10bea8:
    // 0x10bea8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10beac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10beacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10beb0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10beb4: 0x24844340  addiu       $a0, $a0, 0x4340
    ctx->pc = 0x10beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17216));
    // 0x10beb8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BEB8u;
    SET_GPR_U32(ctx, 31, 0x10BEC0u);
    ctx->pc = 0x10BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEB8u;
    // 0x10bebc: 0x24a5a070  addiu       $a1, $a1, -0x5F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BEB8u, 0x10BEC0u)) {
        return;
    }
    ctx->pc = 0x10BEC0u;
label_10bec0:
    // 0x10bec0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10bec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bec8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10becc: 0x24844348  addiu       $a0, $a0, 0x4348
    ctx->pc = 0x10beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    // 0x10bed0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BED0u;
    SET_GPR_U32(ctx, 31, 0x10BED8u);
    ctx->pc = 0x10BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BED0u;
    // 0x10bed4: 0x24a5a080  addiu       $a1, $a1, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BED0u, 0x10BED8u)) {
        return;
    }
    ctx->pc = 0x10BED8u;
label_10bed8:
    // 0x10bed8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10bedc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bee0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10bee4: 0x24844350  addiu       $a0, $a0, 0x4350
    ctx->pc = 0x10bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17232));
    // 0x10bee8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BEE8u;
    SET_GPR_U32(ctx, 31, 0x10BEF0u);
    ctx->pc = 0x10BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEE8u;
    // 0x10beec: 0x24a5a090  addiu       $a1, $a1, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BEE8u, 0x10BEF0u)) {
        return;
    }
    ctx->pc = 0x10BEF0u;
label_10bef0:
    // 0x10bef0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10bef4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10befc: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10BEFCu;
    SET_GPR_U32(ctx, 31, 0x10BF04u);
    ctx->pc = 0x10BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEFCu;
    // 0x10bf00: 0x24a5a0a8  addiu       $a1, $a1, -0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10BEFCu, 0x10BF04u)) {
        return;
    }
    ctx->pc = 0x10BF04u;
label_10bf04:
    // 0x10bf04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10bf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF10u;
    SET_GPR_U32(ctx, 31, 0x10BF18u);
    ctx->pc = 0x10BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF10u;
    // 0x10bf14: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF10u, 0x10BF18u)) {
        return;
    }
    ctx->pc = 0x10BF18u;
label_10bf18:
    // 0x10bf18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10bf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf24: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF24u;
    SET_GPR_U32(ctx, 31, 0x10BF2Cu);
    ctx->pc = 0x10BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF24u;
    // 0x10bf28: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF24u, 0x10BF2Cu)) {
        return;
    }
    ctx->pc = 0x10BF2Cu;
label_10bf2c:
    // 0x10bf2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf38: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF38u;
    SET_GPR_U32(ctx, 31, 0x10BF40u);
    ctx->pc = 0x10BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF38u;
    // 0x10bf3c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF38u, 0x10BF40u)) {
        return;
    }
    ctx->pc = 0x10BF40u;
label_10bf40:
    // 0x10bf40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf44: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10bf48: 0x24a54340  addiu       $a1, $a1, 0x4340
    ctx->pc = 0x10bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
    // 0x10bf4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf50: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF50u;
    SET_GPR_U32(ctx, 31, 0x10BF58u);
    ctx->pc = 0x10BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF50u;
    // 0x10bf54: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF50u, 0x10BF58u)) {
        return;
    }
    ctx->pc = 0x10BF58u;
label_10bf58:
    // 0x10bf58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf5c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10bf60: 0x24a54348  addiu       $a1, $a1, 0x4348
    ctx->pc = 0x10bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17224));
    // 0x10bf64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf68: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF68u;
    SET_GPR_U32(ctx, 31, 0x10BF70u);
    ctx->pc = 0x10BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF68u;
    // 0x10bf6c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF68u, 0x10BF70u)) {
        return;
    }
    ctx->pc = 0x10BF70u;
label_10bf70:
    // 0x10bf70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf74: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x10bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x10bf78: 0x24a54350  addiu       $a1, $a1, 0x4350
    ctx->pc = 0x10bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17232));
    // 0x10bf7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf80: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF80u;
    SET_GPR_U32(ctx, 31, 0x10BF88u);
    ctx->pc = 0x10BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF80u;
    // 0x10bf84: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF80u, 0x10BF88u)) {
        return;
    }
    ctx->pc = 0x10BF88u;
label_10bf88:
    // 0x10bf88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf94: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BF94u;
    SET_GPR_U32(ctx, 31, 0x10BF9Cu);
    ctx->pc = 0x10BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF94u;
    // 0x10bf98: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BF94u, 0x10BF9Cu)) {
        return;
    }
    ctx->pc = 0x10BF9Cu;
label_10bf9c:
    // 0x10bf9c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10bfa0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfa4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10bfa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfac: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BFACu;
    SET_GPR_U32(ctx, 31, 0x10BFB4u);
    ctx->pc = 0x10BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFACu;
    // 0x10bfb0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BFACu, 0x10BFB4u)) {
        return;
    }
    ctx->pc = 0x10BFB4u;
label_10bfb4:
    // 0x10bfb4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10bfb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfbc: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x10bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x10bfc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfc4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BFC4u;
    SET_GPR_U32(ctx, 31, 0x10BFCCu);
    ctx->pc = 0x10BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFC4u;
    // 0x10bfc8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BFC4u, 0x10BFCCu)) {
        return;
    }
    ctx->pc = 0x10BFCCu;
label_10bfcc:
    // 0x10bfcc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10bfccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10bfd0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfd4: 0x24a5f8b8  addiu       $a1, $a1, -0x748
    ctx->pc = 0x10bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965432));
    // 0x10bfd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfdc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BFDCu;
    SET_GPR_U32(ctx, 31, 0x10BFE4u);
    ctx->pc = 0x10BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFDCu;
    // 0x10bfe0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BFDCu, 0x10BFE4u)) {
        return;
    }
    ctx->pc = 0x10BFE4u;
label_10bfe4:
    // 0x10bfe4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10bfe8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x10bfe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10bfec: 0x24a5f8c0  addiu       $a1, $a1, -0x740
    ctx->pc = 0x10bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    // 0x10bff0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10bff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bff4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10BFF4u;
    SET_GPR_U32(ctx, 31, 0x10BFFCu);
    ctx->pc = 0x10BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFF4u;
    // 0x10bff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10BFF4u, 0x10BFFCu)) {
        return;
    }
    ctx->pc = 0x10BFFCu;
label_10bffc:
    // 0x10bffc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10c000: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x10c000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x10c004: 0x2484bcf0  addiu       $a0, $a0, -0x4310
    ctx->pc = 0x10c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
    // 0x10c008: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x10c008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x10c00c: 0x24c6a0c8  addiu       $a2, $a2, -0x5F38
    ctx->pc = 0x10c00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942920));
    // 0x10c010: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10C010u;
    SET_GPR_U32(ctx, 31, 0x10C018u);
    ctx->pc = 0x10C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C010u;
    // 0x10c014: 0x24a5a0b8  addiu       $a1, $a1, -0x5F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10C010u, 0x10C018u)) {
        return;
    }
    ctx->pc = 0x10C018u;
label_10c018:
    // 0x10c018: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10c018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10c01c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x10c01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x10c020: 0x24c6a0c8  addiu       $a2, $a2, -0x5F38
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942920));
    // 0x10c024: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x10c024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x10c028: 0x2484bcf8  addiu       $a0, $a0, -0x4308
    ctx->pc = 0x10c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950136));
    // 0x10c02c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x10C02Cu;
    SET_GPR_U32(ctx, 31, 0x10C034u);
    ctx->pc = 0x10C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C02Cu;
    // 0x10c030: 0x24a5a0d8  addiu       $a1, $a1, -0x5F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x10C02Cu, 0x10C034u)) {
        return;
    }
    ctx->pc = 0x10C034u;
label_10c034:
    // 0x10c034: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c038: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x10c038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x10c03c: 0x24a5bcf0  addiu       $a1, $a1, -0x4310
    ctx->pc = 0x10c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950128));
    // 0x10c040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c044: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10C044u;
    SET_GPR_U32(ctx, 31, 0x10C04Cu);
    ctx->pc = 0x10C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C044u;
    // 0x10c048: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10C044u, 0x10C04Cu)) {
        return;
    }
    ctx->pc = 0x10C04Cu;
label_10c04c:
    // 0x10c04c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10c04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c050: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x10c050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x10c054: 0x24a5bcf8  addiu       $a1, $a1, -0x4308
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950136));
    // 0x10c058: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c05c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10C05Cu;
    SET_GPR_U32(ctx, 31, 0x10C064u);
    ctx->pc = 0x10C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C05Cu;
    // 0x10c060: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10C05Cu, 0x10C064u)) {
        return;
    }
    ctx->pc = 0x10C064u;
label_10c064:
    // 0x10c064: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x10c064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c068: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10c068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c06c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10c06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c070: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10c070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c074: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10c074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c078: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10c078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c07c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10c07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c080: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x10c080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c084: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x10c084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c088: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x10c088u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c090: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x10c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c094: 0x3e00008  jr          $ra
    ctx->pc = 0x10C094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C094u;
        // 0x10c098: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C09Cu;
    // 0x10c09c: 0x0  nop
    ctx->pc = 0x10c09cu;
    // NOP
    ctx->pc = 0x10c0a0u;
}
