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

// Function: sub_001F61E0
// Address: 0x1f61e0 - 0x1f63a0
void sub_001F61E0_0x1f61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F61E0_0x1f61e0");
#endif

    switch (ctx->pc) {
        case 0x1f6304u: goto label_1f6304;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6378u: goto label_1f6378;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6398u: goto label_1f6398;
        default: break;
    }

    ctx->pc = 0x1f61e0u;

    // 0x1f61e0: 0x70000c28  padduw      $at, $zero, $zero
    ctx->pc = 0x1f61e0u;
    SET_GPR_VEC(ctx, 1, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61e4: 0x70001428  padduw      $v0, $zero, $zero
    ctx->pc = 0x1f61e4u;
    SET_GPR_VEC(ctx, 2, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61e8: 0x70001c28  padduw      $v1, $zero, $zero
    ctx->pc = 0x1f61e8u;
    SET_GPR_VEC(ctx, 3, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61ec: 0x70002428  padduw      $a0, $zero, $zero
    ctx->pc = 0x1f61ecu;
    SET_GPR_VEC(ctx, 4, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61f0: 0x70002c28  padduw      $a1, $zero, $zero
    ctx->pc = 0x1f61f0u;
    SET_GPR_VEC(ctx, 5, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61f4: 0x70003428  padduw      $a2, $zero, $zero
    ctx->pc = 0x1f61f4u;
    SET_GPR_VEC(ctx, 6, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61f8: 0x70003c28  padduw      $a3, $zero, $zero
    ctx->pc = 0x1f61f8u;
    SET_GPR_VEC(ctx, 7, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f61fc: 0x70004428  padduw      $t0, $zero, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_VEC(ctx, 8, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6200: 0x70004c28  padduw      $t1, $zero, $zero
    ctx->pc = 0x1f6200u;
    SET_GPR_VEC(ctx, 9, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6204: 0x70005428  padduw      $t2, $zero, $zero
    ctx->pc = 0x1f6204u;
    SET_GPR_VEC(ctx, 10, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6208: 0x70005c28  padduw      $t3, $zero, $zero
    ctx->pc = 0x1f6208u;
    SET_GPR_VEC(ctx, 11, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f620c: 0x70006428  padduw      $t4, $zero, $zero
    ctx->pc = 0x1f620cu;
    SET_GPR_VEC(ctx, 12, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6210: 0x70006c28  padduw      $t5, $zero, $zero
    ctx->pc = 0x1f6210u;
    SET_GPR_VEC(ctx, 13, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6214: 0x70007428  padduw      $t6, $zero, $zero
    ctx->pc = 0x1f6214u;
    SET_GPR_VEC(ctx, 14, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6218: 0x70007c28  padduw      $t7, $zero, $zero
    ctx->pc = 0x1f6218u;
    SET_GPR_VEC(ctx, 15, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f621c: 0x70008428  padduw      $s0, $zero, $zero
    ctx->pc = 0x1f621cu;
    SET_GPR_VEC(ctx, 16, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6220: 0x70008c28  padduw      $s1, $zero, $zero
    ctx->pc = 0x1f6220u;
    SET_GPR_VEC(ctx, 17, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6224: 0x70009428  padduw      $s2, $zero, $zero
    ctx->pc = 0x1f6224u;
    SET_GPR_VEC(ctx, 18, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6228: 0x70009c28  padduw      $s3, $zero, $zero
    ctx->pc = 0x1f6228u;
    SET_GPR_VEC(ctx, 19, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f622c: 0x7000a428  padduw      $s4, $zero, $zero
    ctx->pc = 0x1f622cu;
    SET_GPR_VEC(ctx, 20, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6230: 0x7000ac28  padduw      $s5, $zero, $zero
    ctx->pc = 0x1f6230u;
    SET_GPR_VEC(ctx, 21, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6234: 0x7000b428  padduw      $s6, $zero, $zero
    ctx->pc = 0x1f6234u;
    SET_GPR_VEC(ctx, 22, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6238: 0x7000bc28  padduw      $s7, $zero, $zero
    ctx->pc = 0x1f6238u;
    SET_GPR_VEC(ctx, 23, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f623c: 0x7000c428  padduw      $t8, $zero, $zero
    ctx->pc = 0x1f623cu;
    SET_GPR_VEC(ctx, 24, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6240: 0x7000cc28  padduw      $t9, $zero, $zero
    ctx->pc = 0x1f6240u;
    SET_GPR_VEC(ctx, 25, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6244: 0x7000e428  padduw      $gp, $zero, $zero
    ctx->pc = 0x1f6244u;
    SET_GPR_VEC(ctx, 28, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6248: 0x7000ec28  padduw      $sp, $zero, $zero
    ctx->pc = 0x1f6248u;
    SET_GPR_VEC(ctx, 29, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f624c: 0x7000f428  padduw      $fp, $zero, $zero
    ctx->pc = 0x1f624cu;
    SET_GPR_VEC(ctx, 30, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6250: 0x7000fc28  padduw      $ra, $zero, $zero
    ctx->pc = 0x1f6250u;
    SET_GPR_VEC(ctx, 31, ps2_paddu32(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6254: 0x11  mthi        $zero
    ctx->pc = 0x1f6254u;
    ctx->hi = GPR_U64(ctx, 0);
    // 0x1f6258: 0x70000011  mthi1       $zero
    ctx->pc = 0x1f6258u;
    ctx->hi1 = GPR_U64(ctx, 0);
    // 0x1f625c: 0x13  mtlo        $zero
    ctx->pc = 0x1f625cu;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x1f6260: 0x70000013  mtlo1       $zero
    ctx->pc = 0x1f6260u;
    ctx->lo1 = GPR_U64(ctx, 0);
    // 0x1f6264: 0x4190000  mtsah       $zero, 0x0
    ctx->pc = 0x1f6264u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)0) & 0x7) << 4;
    // 0x1f6268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f626c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f626cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6270: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f6270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6274: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f6274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f6278: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f6278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f627c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1f627cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f6280: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1f6280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1f6284: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1f6284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1f6288: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x1f6288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1f628c: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1f628cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1f6290: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x1f6290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1f6294: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x1f6294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1f6298: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f6298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f629c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f629cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f62a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1f62a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f62a4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1f62a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f62a8: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1f62a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1f62ac: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x1f62acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x1f62b0: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x1f62b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x1f62b4: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x1f62b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x1f62b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f62b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f62bc: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f62bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f62c0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f62c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f62c4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f62c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f62c8: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1f62c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f62cc: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1f62ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1f62d0: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x1f62d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f62d4: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x1f62d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1f62d8: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x1f62d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1f62dc: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x1f62dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1f62e0: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x1f62e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x1f62e4: 0x4480f800  mtc1        $zero, $f31
    ctx->pc = 0x1f62e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x1f62e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f62e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1f62ec: 0x40f  sync.p
    ctx->pc = 0x1f62ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f62f0: 0x44c0f800  ctc1        $zero, $FpcCsr
    ctx->pc = 0x1f62f0u;
    ctx->fcr31 = GPR_U32(ctx, 0) & 0x0183FFFF;
    // 0x1f62f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1f62f8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1f62fc: 0x24423e80  addiu       $v0, $v0, 0x3E80
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x1f6300: 0x24635f0c  addiu       $v1, $v1, 0x5F0C
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24332));
label_1f6304:
    // 0x1f6304: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1f6304u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1f6308: 0x0  nop
    ctx->pc = 0x1f6308u;
    // NOP
    // 0x1f630c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1f630cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f6310: 0x0  nop
    ctx->pc = 0x1f6310u;
    // NOP
    // 0x1f6314: 0x0  nop
    ctx->pc = 0x1f6314u;
    // NOP
    // 0x1f6318: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F6318u;
    {
        const bool branch_taken_0x1f6318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6318u;
        // 0x1f631c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6318) {
            ctx->pc = 0x1F6304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6304;
        }
    }
    ctx->pc = 0x1F6320u;
    // 0x1f6320: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1f6324: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x1f6324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x1f6328: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x1f6328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x1f632c: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x1f632cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x1f6330: 0x3c08001f  lui         $t0, 0x1F
    ctx->pc = 0x1f6330u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
    // 0x1f6334: 0x2484b070  addiu       $a0, $a0, -0x4F90
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946928));
    // 0x1f6338: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f633c: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x1f633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x1f6340: 0x24e71880  addiu       $a3, $a3, 0x1880
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6272));
    // 0x1f6344: 0x250863a8  addiu       $t0, $t0, 0x63A8
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25512));
    // 0x1f6348: 0x80e02d  daddu       $gp, $a0, $zero
    ctx->pc = 0x1f6348u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f634c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f6350: 0xc  syscall     0
    ctx->pc = 0x1f6350u;
    ctx->pc = 0x1F6354u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f6354:
    // 0x1f6354: 0x40e82d  daddu       $sp, $v0, $zero
    ctx->pc = 0x1f6354u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6358: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1f6358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1f635c: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x1f6360: 0x24845f0c  addiu       $a0, $a0, 0x5F0C
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24332));
    // 0x1f6364: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f6368: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x1f6368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1f636c: 0xc  syscall     0
    ctx->pc = 0x1f636cu;
    ctx->pc = 0x1F6370u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f6370:
    // 0x1f6370: 0xc0c9c40  jal         func_327100
    ctx->pc = 0x1F6370u;
    SET_GPR_U32(ctx, 31, 0x1F6378u);
    ctx->pc = 0x327100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327100u, 0x1F6370u, 0x1F6378u)) {
        return;
    }
    ctx->pc = 0x1F6378u;
label_1f6378:
    // 0x1f6378: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x1F6378u;
    SET_GPR_U32(ctx, 31, 0x1F6380u);
    ctx->pc = 0x1F637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6378u;
    // 0x1f637c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x1F6378u, 0x1F6380u)) {
        return;
    }
    ctx->pc = 0x1F6380u;
label_1f6380:
    // 0x1f6380: 0x42000038  ei
    ctx->pc = 0x1f6380u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1f6384: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1f6384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1f6388: 0x24421880  addiu       $v0, $v0, 0x1880
    ctx->pc = 0x1f6388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x1f638c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f638cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701880u));
    // 0x1f6390: 0xc07d774  jal         func_1F5DD0
    ctx->pc = 0x1F6390u;
    SET_GPR_U32(ctx, 31, 0x1F6398u);
    ctx->pc = 0x1F6394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6390u;
    // 0x1f6394: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5DD0u, 0x1F6390u, 0x1F6398u)) {
        return;
    }
    ctx->pc = 0x1F6398u;
label_1f6398:
    // 0x1f6398: 0x80c9cc4  j           func_327310
    ctx->pc = 0x1F6398u;
    ctx->pc = 0x1F639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6398u;
    // 0x1f639c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327310u;
    sub_00327310_0x327310(rdram, ctx, runtime); return;
    ctx->pc = 0x1F63A0u;
}
