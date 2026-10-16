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

// Function: sub_001CCCD0
// Address: 0x1cccd0 - 0x1cd090
void sub_001CCCD0_0x1cccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCCD0_0x1cccd0");
#endif

    switch (ctx->pc) {
        case 0x1ccd10u: goto label_1ccd10;
        case 0x1ccd3cu: goto label_1ccd3c;
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccdd0u: goto label_1ccdd0;
        case 0x1ccde0u: goto label_1ccde0;
        case 0x1ccdecu: goto label_1ccdec;
        case 0x1cce3cu: goto label_1cce3c;
        case 0x1cce80u: goto label_1cce80;
        case 0x1cce8cu: goto label_1cce8c;
        case 0x1ccea8u: goto label_1ccea8;
        case 0x1ccee8u: goto label_1ccee8;
        case 0x1ccf30u: goto label_1ccf30;
        case 0x1ccf3cu: goto label_1ccf3c;
        case 0x1ccf44u: goto label_1ccf44;
        case 0x1ccf8cu: goto label_1ccf8c;
        case 0x1ccf98u: goto label_1ccf98;
        case 0x1ccfacu: goto label_1ccfac;
        case 0x1cd000u: goto label_1cd000;
        case 0x1cd00cu: goto label_1cd00c;
        case 0x1cd014u: goto label_1cd014;
        case 0x1cd054u: goto label_1cd054;
        default: break;
    }

    ctx->pc = 0x1cccd0u;

    // 0x1cccd0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1cccd4: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x1cccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x1cccd8: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x1cccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x1cccdc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cccdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccce0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ccce0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccce4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1ccce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x1ccce8: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1ccce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1cccec: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1cccecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1cccf0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x1cccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x1cccf4: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x1cccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x1cccf8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x1cccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x1cccfc: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x1cccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x1ccd00: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x1ccd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x1ccd04: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1ccd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1ccd08: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CCD08u;
    SET_GPR_U32(ctx, 31, 0x1CCD10u);
    ctx->pc = 0x1CCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD08u;
    // 0x1ccd0c: 0xe7b401a0  swc1        $f20, 0x1A0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CCD08u, 0x1CCD10u)) {
        return;
    }
    ctx->pc = 0x1CCD10u;
label_1ccd10:
    // 0x1ccd10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ccd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccd14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ccd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ccd18: 0xc6c00080  lwc1        $f0, 0x80($s6)
    ctx->pc = 0x1ccd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd1c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1ccd1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ccd20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd28: 0x0  nop
    ctx->pc = 0x1ccd28u;
    // NOP
    // 0x1ccd2c: 0x0  nop
    ctx->pc = 0x1ccd2cu;
    // NOP
    // 0x1ccd30: 0x4600ad83  div.s       $f22, $f21, $f0
    ctx->pc = 0x1ccd30u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1ccd34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CCD34u;
    SET_GPR_U32(ctx, 31, 0x1CCD3Cu);
    ctx->pc = 0x1CCD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD34u;
    // 0x1ccd38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CCD34u, 0x1CCD3Cu)) {
        return;
    }
    ctx->pc = 0x1CCD3Cu;
label_1ccd3c:
    // 0x1ccd3c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1CCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD44u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1CCD3Cu, 0x1CCD44u)) {
        return;
    }
    ctx->pc = 0x1CCD44u;
label_1ccd44:
    // 0x1ccd44: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCD44u;
    {
        const bool branch_taken_0x1ccd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd44) {
            ctx->pc = 0x1CCD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD44u;
            // 0x1ccd48: 0x8e820288  lw          $v0, 0x288($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD68u;
            goto label_1ccd68;
        }
    }
    ctx->pc = 0x1CCD4Cu;
    // 0x1ccd4c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1ccd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd50: 0x3c014298  lui         $at, 0x4298
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17048 << 16));
    // 0x1ccd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccd58: 0x0  nop
    ctx->pc = 0x1ccd58u;
    // NOP
    // 0x1ccd5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ccd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ccd60: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1ccd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1ccd64: 0x8e820288  lw          $v0, 0x288($s4)
    ctx->pc = 0x1ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 648)));
label_1ccd68:
    // 0x1ccd68: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1CCD68u;
    {
        const bool branch_taken_0x1ccd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD68u;
        // 0x1ccd6c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd68) {
            ctx->pc = 0x1CCE94u;
            goto label_1cce94;
        }
    }
    ctx->pc = 0x1CCD70u;
    // 0x1ccd70: 0x8e840280  lw          $a0, 0x280($s4)
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 640)));
    // 0x1ccd74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ccd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ccd78: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CCD78u;
    SET_GPR_U32(ctx, 31, 0x1CCD80u);
    ctx->pc = 0x1CCD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD78u;
    // 0x1ccd7c: 0x26330fc8  addiu       $s3, $s1, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CCD78u, 0x1CCD80u)) {
        return;
    }
    ctx->pc = 0x1CCD80u;
label_1ccd80:
    // 0x1ccd80: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1ccd80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
    // 0x1ccd84: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ccd88: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ccd8c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ccd90: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1ccd94: 0xc44c9974  lwc1        $f12, -0x668C($v0)
    ctx->pc = 0x1ccd94u;
    { uint32_t bits = FAST_READ32(0x339974u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccd98: 0x26500048  addiu       $s0, $s2, 0x48
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x1ccd9c: 0xc46d9978  lwc1        $f13, -0x6688($v1)
    ctx->pc = 0x1ccd9cu;
    { uint32_t bits = FAST_READ32(0x339978u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccda0: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1ccda0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccda4: 0xc48e997c  lwc1        $f14, -0x6684($a0)
    ctx->pc = 0x1ccda4u;
    { uint32_t bits = FAST_READ32(0x33997Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ccda8: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1ccda8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccdac: 0xc4af9980  lwc1        $f15, -0x6680($a1)
    ctx->pc = 0x1ccdacu;
    { uint32_t bits = FAST_READ32(0x339980u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ccdb0: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1ccdb0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccdb4: 0xc6700018  lwc1        $f16, 0x18($s3)
    ctx->pc = 0x1ccdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ccdb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccdbc: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1ccdbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ccdc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdc4: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1ccdc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ccdc8: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CCDC8u;
    SET_GPR_U32(ctx, 31, 0x1CCDD0u);
    ctx->pc = 0x1CCDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDC8u;
    // 0x1ccdcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CCDC8u, 0x1CCDD0u)) {
        return;
    }
    ctx->pc = 0x1CCDD0u;
label_1ccdd0:
    // 0x1ccdd0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1ccdd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ccdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccdd8: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CCDD8u;
    SET_GPR_U32(ctx, 31, 0x1CCDE0u);
    ctx->pc = 0x1CCDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDD8u;
    // 0x1ccddc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CCDD8u, 0x1CCDE0u)) {
        return;
    }
    ctx->pc = 0x1CCDE0u;
label_1ccde0:
    // 0x1ccde0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ccde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccde4: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CCDE4u;
    SET_GPR_U32(ctx, 31, 0x1CCDECu);
    ctx->pc = 0x1CCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDE4u;
    // 0x1ccde8: 0x8e840278  lw          $a0, 0x278($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CCDE4u, 0x1CCDECu)) {
        return;
    }
    ctx->pc = 0x1CCDECu;
label_1ccdec:
    // 0x1ccdec: 0xc6800298  lwc1        $f0, 0x298($s4)
    ctx->pc = 0x1ccdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccdf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdf4: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1ccdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccdf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdfc: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x1ccdfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1cce00: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x1cce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cce04: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x1cce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cce08: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1cce08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1cce0c: 0xc68f000c  lwc1        $f15, 0xC($s4)
    ctx->pc = 0x1cce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cce10: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1cce10u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1cce14: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x1cce14u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x1cce18: 0xc6700018  lwc1        $f16, 0x18($s3)
    ctx->pc = 0x1cce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cce1c: 0x46017bc0  add.s       $f15, $f15, $f1
    ctx->pc = 0x1cce1cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[1]);
    // 0x1cce20: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1cce20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cce24: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1cce24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cce28: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1cce28u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1cce2c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1cce2cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1cce30: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1cce30u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1cce34: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CCE34u;
    SET_GPR_U32(ctx, 31, 0x1CCE3Cu);
    ctx->pc = 0x1CCE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE34u;
    // 0x1cce38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CCE34u, 0x1CCE3Cu)) {
        return;
    }
    ctx->pc = 0x1CCE3Cu;
label_1cce3c:
    // 0x1cce3c: 0x8e8302a8  lw          $v1, 0x2A8($s4)
    ctx->pc = 0x1cce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
    // 0x1cce40: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cce44: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCE44u;
    {
        const bool branch_taken_0x1cce44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE44u;
        // 0x1cce48: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce44) {
            ctx->pc = 0x1CCE80u;
            goto label_1cce80;
        }
    }
    ctx->pc = 0x1CCE4Cu;
    // 0x1cce4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cce50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1cce54: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1cce58: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1cce58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1cce5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cce5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cce60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cce64: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1cce64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1cce68: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1cce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cce6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cce6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce70: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cce70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cce74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce78: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1CCE78u;
    SET_GPR_U32(ctx, 31, 0x1CCE80u);
    ctx->pc = 0x1CCE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE78u;
    // 0x1cce7c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1CCE78u, 0x1CCE80u)) {
        return;
    }
    ctx->pc = 0x1CCE80u;
label_1cce80:
    // 0x1cce80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cce80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce84: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CCE84u;
    SET_GPR_U32(ctx, 31, 0x1CCE8Cu);
    ctx->pc = 0x1CCE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE84u;
    // 0x1cce88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CCE84u, 0x1CCE8Cu)) {
        return;
    }
    ctx->pc = 0x1CCE8Cu;
label_1cce8c:
    // 0x1cce8c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1CCE8Cu;
    {
        const bool branch_taken_0x1cce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE8Cu;
        // 0x1cce90: 0x8e82028c  lw          $v0, 0x28C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce8c) {
            ctx->pc = 0x1CCF9Cu;
            goto label_1ccf9c;
        }
    }
    ctx->pc = 0x1CCE94u;
label_1cce94:
    // 0x1cce94: 0x8e840278  lw          $a0, 0x278($s4)
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x1cce98: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1cce98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x1cce9c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cce9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ccea0: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CCEA0u;
    SET_GPR_U32(ctx, 31, 0x1CCEA8u);
    ctx->pc = 0x1CCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEA0u;
    // 0x1ccea4: 0x26120fc8  addiu       $s2, $s0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CCEA0u, 0x1CCEA8u)) {
        return;
    }
    ctx->pc = 0x1CCEA8u;
label_1ccea8:
    // 0x1ccea8: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1cceac: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1cceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cceb0: 0x26330048  addiu       $s3, $s1, 0x48
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1cceb4: 0xc68d0004  lwc1        $f13, 0x4($s4)
    ctx->pc = 0x1cceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cceb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccebc: 0xc68e0008  lwc1        $f14, 0x8($s4)
    ctx->pc = 0x1ccebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ccec0: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1ccec0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccec4: 0xc68f000c  lwc1        $f15, 0xC($s4)
    ctx->pc = 0x1ccec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ccec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ccec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecc: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x1cceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1cced0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1cced0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1cced4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1cced4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cced8: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x1cced8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccedc: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1ccedcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ccee0: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CCEE0u;
    SET_GPR_U32(ctx, 31, 0x1CCEE8u);
    ctx->pc = 0x1CCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEE0u;
    // 0x1ccee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CCEE0u, 0x1CCEE8u)) {
        return;
    }
    ctx->pc = 0x1CCEE8u;
label_1ccee8:
    // 0x1ccee8: 0x8e8302a8  lw          $v1, 0x2A8($s4)
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
    // 0x1cceec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ccef0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCEF0u;
    {
        const bool branch_taken_0x1ccef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF0u;
        // 0x1ccef4: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccef0) {
            ctx->pc = 0x1CCF30u;
            goto label_1ccf30;
        }
    }
    ctx->pc = 0x1CCEF8u;
    // 0x1ccef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ccefc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ccefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ccf00: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ccf04: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1ccf08: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1ccf08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1ccf0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ccf14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf18: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1ccf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ccf1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccf20: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1ccf20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccf24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf28: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1CCF28u;
    SET_GPR_U32(ctx, 31, 0x1CCF30u);
    ctx->pc = 0x1CCF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF28u;
    // 0x1ccf2c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1CCF28u, 0x1CCF30u)) {
        return;
    }
    ctx->pc = 0x1CCF30u;
label_1ccf30:
    // 0x1ccf30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ccf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccf34: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CCF34u;
    SET_GPR_U32(ctx, 31, 0x1CCF3Cu);
    ctx->pc = 0x1CCF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF34u;
    // 0x1ccf38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CCF34u, 0x1CCF3Cu)) {
        return;
    }
    ctx->pc = 0x1CCF3Cu;
label_1ccf3c:
    // 0x1ccf3c: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CCF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF44u);
    ctx->pc = 0x1CCF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF3Cu;
    // 0x1ccf40: 0x8e84027c  lw          $a0, 0x27C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CCF3Cu, 0x1CCF44u)) {
        return;
    }
    ctx->pc = 0x1CCF44u;
label_1ccf44:
    // 0x1ccf44: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ccf48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ccf4c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ccf50: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1ccf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1ccf54: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x1ccf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ccf58: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x1ccf58u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
    // 0x1ccf5c: 0xc48e996c  lwc1        $f14, -0x6694($a0)
    ctx->pc = 0x1ccf5cu;
    { uint32_t bits = FAST_READ32(0x33996Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ccf60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ccf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf64: 0xc4cf9970  lwc1        $f15, -0x6690($a2)
    ctx->pc = 0x1ccf64u;
    { uint32_t bits = FAST_READ32(0x339970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ccf68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf6c: 0xc44c9964  lwc1        $f12, -0x669C($v0)
    ctx->pc = 0x1ccf6cu;
    { uint32_t bits = FAST_READ32(0x339964u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf70: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1ccf70u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccf74: 0xc46d9968  lwc1        $f13, -0x6698($v1)
    ctx->pc = 0x1ccf74u;
    { uint32_t bits = FAST_READ32(0x339968u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccf78: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1ccf78u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1ccf7c: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1ccf7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ccf80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf84: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CCF84u;
    SET_GPR_U32(ctx, 31, 0x1CCF8Cu);
    ctx->pc = 0x1CCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF84u;
    // 0x1ccf88: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CCF84u, 0x1CCF8Cu)) {
        return;
    }
    ctx->pc = 0x1CCF8Cu;
label_1ccf8c:
    // 0x1ccf8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ccf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf90: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CCF90u;
    SET_GPR_U32(ctx, 31, 0x1CCF98u);
    ctx->pc = 0x1CCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF90u;
    // 0x1ccf94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CCF90u, 0x1CCF98u)) {
        return;
    }
    ctx->pc = 0x1CCF98u;
label_1ccf98:
    // 0x1ccf98: 0x8e82028c  lw          $v0, 0x28C($s4)
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 652)));
label_1ccf9c:
    // 0x1ccf9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCF9Cu;
    {
        const bool branch_taken_0x1ccf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf9c) {
            ctx->pc = 0x1CD00Cu;
            goto label_1cd00c;
        }
    }
    ctx->pc = 0x1CCFA4u;
    // 0x1ccfa4: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1CCFA4u;
    SET_GPR_U32(ctx, 31, 0x1CCFACu);
    ctx->pc = 0x1CCFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA4u;
    // 0x1ccfa8: 0x8e840284  lw          $a0, 0x284($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1CCFA4u, 0x1CCFACu)) {
        return;
    }
    ctx->pc = 0x1CCFACu;
label_1ccfac:
    // 0x1ccfac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ccfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ccfb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ccfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccfb4: 0x26e70fc8  addiu       $a3, $s7, 0xFC8
    ctx->pc = 0x1ccfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
    // 0x1ccfb8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1ccfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1ccfbc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ccfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ccfc0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ccfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ccfc4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ccfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1ccfc8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1ccfcc: 0xc4f00018  lwc1        $f16, 0x18($a3)
    ctx->pc = 0x1ccfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ccfd0: 0xc48e995c  lwc1        $f14, -0x66A4($a0)
    ctx->pc = 0x1ccfd0u;
    { uint32_t bits = FAST_READ32(0x33995Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ccfd4: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1ccfd8: 0xc4cf9960  lwc1        $f15, -0x66A0($a2)
    ctx->pc = 0x1ccfd8u;
    { uint32_t bits = FAST_READ32(0x339960u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ccfdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ccfe0: 0xc44c9954  lwc1        $f12, -0x66AC($v0)
    ctx->pc = 0x1ccfe0u;
    { uint32_t bits = FAST_READ32(0x339954u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccfe4: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1ccfe4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1ccfe8: 0xc46d9958  lwc1        $f13, -0x66A8($v1)
    ctx->pc = 0x1ccfe8u;
    { uint32_t bits = FAST_READ32(0x339958u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccfec: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x1ccfecu;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    // 0x1ccff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccff4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1ccff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ccff8: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1CCFF8u;
    SET_GPR_U32(ctx, 31, 0x1CD000u);
    ctx->pc = 0x1CCFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFF8u;
    // 0x1ccffc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1CCFF8u, 0x1CD000u)) {
        return;
    }
    ctx->pc = 0x1CD000u;
label_1cd000:
    // 0x1cd000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cd004: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1CD004u;
    SET_GPR_U32(ctx, 31, 0x1CD00Cu);
    ctx->pc = 0x1CD008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD004u;
    // 0x1cd008: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1CD004u, 0x1CD00Cu)) {
        return;
    }
    ctx->pc = 0x1CD00Cu;
label_1cd00c:
    // 0x1cd00c: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1CD00Cu;
    SET_GPR_U32(ctx, 31, 0x1CD014u);
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1CD00Cu, 0x1CD014u)) {
        return;
    }
    ctx->pc = 0x1CD014u;
label_1cd014:
    // 0x1cd014: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD014u;
    {
        const bool branch_taken_0x1cd014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd014) {
            ctx->pc = 0x1CD018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD014u;
            // 0x1cd018: 0x8e840260  lw          $a0, 0x260($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD038u;
            goto label_1cd038;
        }
    }
    ctx->pc = 0x1CD01Cu;
    // 0x1cd01c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1cd01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd020: 0x3c014298  lui         $at, 0x4298
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17048 << 16));
    // 0x1cd024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd028: 0x0  nop
    ctx->pc = 0x1cd028u;
    // NOP
    // 0x1cd02c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cd02cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cd030: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1cd030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1cd034: 0x8e840260  lw          $a0, 0x260($s4)
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
label_1cd038:
    // 0x1cd038: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD038u;
    {
        const bool branch_taken_0x1cd038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD038u;
        // 0x1cd03c: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd038) {
            ctx->pc = 0x1CD058u;
            goto label_1cd058;
        }
    }
    ctx->pc = 0x1CD040u;
    // 0x1cd040: 0x8e820288  lw          $v0, 0x288($s4)
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 648)));
    // 0x1cd044: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD044u;
    {
        const bool branch_taken_0x1cd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD044u;
        // 0x1cd048: 0x7bb10180  lq          $s1, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd044) {
            ctx->pc = 0x1CD05Cu;
            goto label_1cd05c;
        }
    }
    ctx->pc = 0x1CD04Cu;
    // 0x1cd04c: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CD04Cu;
    SET_GPR_U32(ctx, 31, 0x1CD054u);
    ctx->pc = 0x1CD050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD04Cu;
    // 0x1cd050: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CD04Cu, 0x1CD054u)) {
        return;
    }
    ctx->pc = 0x1CD054u;
label_1cd054:
    // 0x1cd054: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x1cd054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1cd058:
    // 0x1cd058: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x1cd058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1cd05c:
    // 0x1cd05c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x1cd05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1cd060: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x1cd060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cd064: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x1cd064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cd068: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x1cd068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cd06c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x1cd06cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cd070: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x1cd070u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cd074: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cd074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cd078: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1cd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cd07c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1cd07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd080: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1cd080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd084: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD084u;
        // 0x1cd088: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD08Cu;
    // 0x1cd08c: 0x0  nop
    ctx->pc = 0x1cd08cu;
    // NOP
    ctx->pc = 0x1cd090u;
}
