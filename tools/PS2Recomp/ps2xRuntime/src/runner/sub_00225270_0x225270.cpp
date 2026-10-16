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

// Function: sub_00225270
// Address: 0x225270 - 0x225388
void sub_00225270_0x225270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225270_0x225270");
#endif

    switch (ctx->pc) {
        case 0x225270u: goto label_225270;
        case 0x225274u: goto label_225274;
        case 0x225278u: goto label_225278;
        case 0x22527cu: goto label_22527c;
        case 0x225280u: goto label_225280;
        case 0x225284u: goto label_225284;
        case 0x225288u: goto label_225288;
        case 0x22528cu: goto label_22528c;
        case 0x225290u: goto label_225290;
        case 0x225294u: goto label_225294;
        case 0x225298u: goto label_225298;
        case 0x22529cu: goto label_22529c;
        case 0x2252a0u: goto label_2252a0;
        case 0x2252a4u: goto label_2252a4;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252acu: goto label_2252ac;
        case 0x2252b0u: goto label_2252b0;
        case 0x2252b4u: goto label_2252b4;
        case 0x2252b8u: goto label_2252b8;
        case 0x2252bcu: goto label_2252bc;
        case 0x2252c0u: goto label_2252c0;
        case 0x2252c4u: goto label_2252c4;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252ccu: goto label_2252cc;
        case 0x2252d0u: goto label_2252d0;
        case 0x2252d4u: goto label_2252d4;
        case 0x2252d8u: goto label_2252d8;
        case 0x2252dcu: goto label_2252dc;
        case 0x2252e0u: goto label_2252e0;
        case 0x2252e4u: goto label_2252e4;
        case 0x2252e8u: goto label_2252e8;
        case 0x2252ecu: goto label_2252ec;
        case 0x2252f0u: goto label_2252f0;
        case 0x2252f4u: goto label_2252f4;
        case 0x2252f8u: goto label_2252f8;
        case 0x2252fcu: goto label_2252fc;
        case 0x225300u: goto label_225300;
        case 0x225304u: goto label_225304;
        case 0x225308u: goto label_225308;
        case 0x22530cu: goto label_22530c;
        case 0x225310u: goto label_225310;
        case 0x225314u: goto label_225314;
        case 0x225318u: goto label_225318;
        case 0x22531cu: goto label_22531c;
        case 0x225320u: goto label_225320;
        case 0x225324u: goto label_225324;
        case 0x225328u: goto label_225328;
        case 0x22532cu: goto label_22532c;
        case 0x225330u: goto label_225330;
        case 0x225334u: goto label_225334;
        case 0x225338u: goto label_225338;
        case 0x22533cu: goto label_22533c;
        case 0x225340u: goto label_225340;
        case 0x225344u: goto label_225344;
        case 0x225348u: goto label_225348;
        case 0x22534cu: goto label_22534c;
        case 0x225350u: goto label_225350;
        case 0x225354u: goto label_225354;
        case 0x225358u: goto label_225358;
        case 0x22535cu: goto label_22535c;
        case 0x225360u: goto label_225360;
        case 0x225364u: goto label_225364;
        case 0x225368u: goto label_225368;
        case 0x22536cu: goto label_22536c;
        case 0x225370u: goto label_225370;
        case 0x225374u: goto label_225374;
        case 0x225378u: goto label_225378;
        case 0x22537cu: goto label_22537c;
        case 0x225380u: goto label_225380;
        case 0x225384u: goto label_225384;
        default: break;
    }

    ctx->pc = 0x225270u;

label_225270:
    // 0x225270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225274:
    // 0x225274: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_225278:
    // 0x225278: 0x8c633e80  lw          $v1, 0x3E80($v1)
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16000)));
label_22527c:
    // 0x22527c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_225280:
    // 0x225280: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x225280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_225284:
    // 0x225284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225288:
    // 0x225288: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_22528c:
    // 0x22528c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225290:
    // 0x225290: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x225290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_225294:
    // 0x225294: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_225298:
    // 0x225298: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x225298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
label_22529c:
    // 0x22529c: 0x40f809  jalr        $v0
label_2252a0:
    if (ctx->pc == 0x2252A0u) {
        ctx->pc = 0x2252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22529Cu;
        // 0x2252a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2252A4u;
        goto label_2252a4;
    }
    ctx->pc = 0x22529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2252A4u);
        ctx->pc = 0x2252A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22529Cu;
        // 0x2252a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22529Cu, 0x2252A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2252A4u;
label_2252a4:
    // 0x2252a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2252a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2252a8:
    // 0x2252a8: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_2252ac:
    if (ctx->pc == 0x2252ACu) {
        ctx->pc = 0x2252ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A8u;
        // 0x2252ac: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2252B0u;
        goto label_2252b0;
    }
    ctx->pc = 0x2252A8u;
    {
        const bool branch_taken_0x2252a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A8u;
        // 0x2252ac: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252a8) {
            ctx->pc = 0x225368u;
            goto label_225368;
        }
    }
    ctx->pc = 0x2252B0u;
label_2252b0:
    // 0x2252b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2252b4:
    // 0x2252b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2252b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2252b8:
    // 0x2252b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2252b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2252bc:
    // 0x2252bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2252bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2252c0:
    // 0x2252c0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2252c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2252c4:
    // 0x2252c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2252c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2252c8:
    // 0x2252c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2252c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2252cc:
    // 0x2252cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2252ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_2252d0:
    // 0x2252d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2252d4:
    // 0x2252d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2252d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2252d8:
    // 0x2252d8: 0x24a54bd8  addiu       $a1, $a1, 0x4BD8
    ctx->pc = 0x2252d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19416));
label_2252dc:
    // 0x2252dc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2252dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2252e0:
    // 0x2252e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2252e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2252e4:
    // 0x2252e4: 0x24634ca0  addiu       $v1, $v1, 0x4CA0
    ctx->pc = 0x2252e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19616));
label_2252e8:
    // 0x2252e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2252e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2252ec:
    // 0x2252ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2252ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2252f0:
    // 0x2252f0: 0x24424cf8  addiu       $v0, $v0, 0x4CF8
    ctx->pc = 0x2252f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19704));
label_2252f4:
    // 0x2252f4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2252f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_2252f8:
    // 0x2252f8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2252f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_2252fc:
    // 0x2252fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2252fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225300:
    // 0x225300: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x225300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_225304:
    // 0x225304: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x225304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_225308:
    // 0x225308: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x225308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_22530c:
    // 0x22530c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x22530cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_225310:
    // 0x225310: 0xa2060000  sb          $a2, 0x0($s0)
    ctx->pc = 0x225310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
label_225314:
    // 0x225314: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x225314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_225318:
    // 0x225318: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x225318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_22531c:
    // 0x22531c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x22531cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_225320:
    // 0x225320: 0xe6020078  swc1        $f2, 0x78($s0)
    ctx->pc = 0x225320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_225324:
    // 0x225324: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x225324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_225328:
    // 0x225328: 0xe6040084  swc1        $f4, 0x84($s0)
    ctx->pc = 0x225328u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_22532c:
    // 0x22532c: 0xe6010088  swc1        $f1, 0x88($s0)
    ctx->pc = 0x22532cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_225330:
    // 0x225330: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x225330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_225334:
    // 0x225334: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x225334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_225338:
    // 0x225338: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x225338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_22533c:
    // 0x22533c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x22533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_225340:
    // 0x225340: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x225340u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_225344:
    // 0x225344: 0xc088e4e  jal         func_223938
label_225348:
    if (ctx->pc == 0x225348u) {
        ctx->pc = 0x225348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225344u;
        // 0x225348: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22534Cu;
        goto label_22534c;
    }
    ctx->pc = 0x225344u;
    SET_GPR_U32(ctx, 31, 0x22534Cu);
    ctx->pc = 0x225348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225344u;
    // 0x225348: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223938u, 0x225344u, 0x22534Cu)) {
        return;
    }
    ctx->pc = 0x22534Cu;
label_22534c:
    // 0x22534c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_225350:
    // 0x225350: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x225350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_225354:
    // 0x225354: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x225354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
label_225358:
    // 0x225358: 0xc093958  jal         func_24E560
label_22535c:
    if (ctx->pc == 0x22535Cu) {
        ctx->pc = 0x22535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225358u;
        // 0x22535c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225360u;
        goto label_225360;
    }
    ctx->pc = 0x225358u;
    SET_GPR_U32(ctx, 31, 0x225360u);
    ctx->pc = 0x22535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225358u;
    // 0x22535c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x225358u, 0x225360u)) {
        return;
    }
    ctx->pc = 0x225360u;
label_225360:
    // 0x225360: 0x10000003  b           . + 4 + (0x3 << 2)
label_225364:
    if (ctx->pc == 0x225364u) {
        ctx->pc = 0x225364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225360u;
        // 0x225364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225368u;
        goto label_225368;
    }
    ctx->pc = 0x225360u;
    {
        const bool branch_taken_0x225360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225360u;
        // 0x225364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225360) {
            ctx->pc = 0x225370u;
            goto label_225370;
        }
    }
    ctx->pc = 0x225368u;
label_225368:
    // 0x225368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22536c:
    // 0x22536c: 0x0  nop
    ctx->pc = 0x22536cu;
    // NOP
label_225370:
    // 0x225370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x225370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225374:
    // 0x225374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225378:
    // 0x225378: 0x3e00008  jr          $ra
label_22537c:
    if (ctx->pc == 0x22537Cu) {
        ctx->pc = 0x22537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225378u;
        // 0x22537c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225380u;
        goto label_225380;
    }
    ctx->pc = 0x225378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225378u;
        // 0x22537c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225380u;
label_225380:
    // 0x225380: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_225384:
    // 0x225384: 0x0  nop
    ctx->pc = 0x225384u;
    // NOP
    ctx->pc = 0x225388u;
}
