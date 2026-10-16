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

// Function: sub_001342A8
// Address: 0x1342a8 - 0x134718
void sub_001342A8_0x1342a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001342A8_0x1342a8");
#endif

    switch (ctx->pc) {
        case 0x1342ecu: goto label_1342ec;
        case 0x1342f4u: goto label_1342f4;
        case 0x1342fcu: goto label_1342fc;
        case 0x134310u: goto label_134310;
        case 0x134324u: goto label_134324;
        case 0x134330u: goto label_134330;
        case 0x134338u: goto label_134338;
        case 0x13434cu: goto label_13434c;
        case 0x134360u: goto label_134360;
        case 0x1343a8u: goto label_1343a8;
        case 0x1343b0u: goto label_1343b0;
        case 0x1343c4u: goto label_1343c4;
        case 0x1343d8u: goto label_1343d8;
        case 0x1343e4u: goto label_1343e4;
        case 0x1343ecu: goto label_1343ec;
        case 0x134400u: goto label_134400;
        case 0x134414u: goto label_134414;
        case 0x134420u: goto label_134420;
        case 0x134430u: goto label_134430;
        case 0x13443cu: goto label_13443c;
        case 0x134450u: goto label_134450;
        case 0x134468u: goto label_134468;
        case 0x13447cu: goto label_13447c;
        case 0x134484u: goto label_134484;
        case 0x13448cu: goto label_13448c;
        case 0x1344a0u: goto label_1344a0;
        case 0x1344b8u: goto label_1344b8;
        case 0x1344c4u: goto label_1344c4;
        case 0x1344ccu: goto label_1344cc;
        case 0x1344e0u: goto label_1344e0;
        case 0x1344f4u: goto label_1344f4;
        case 0x134500u: goto label_134500;
        case 0x134508u: goto label_134508;
        case 0x13451cu: goto label_13451c;
        case 0x134530u: goto label_134530;
        case 0x134554u: goto label_134554;
        case 0x13455cu: goto label_13455c;
        case 0x134570u: goto label_134570;
        case 0x134584u: goto label_134584;
        case 0x134590u: goto label_134590;
        case 0x134598u: goto label_134598;
        case 0x1345acu: goto label_1345ac;
        case 0x1345c0u: goto label_1345c0;
        case 0x1345d0u: goto label_1345d0;
        case 0x1345d8u: goto label_1345d8;
        case 0x1345ecu: goto label_1345ec;
        case 0x134600u: goto label_134600;
        case 0x13460cu: goto label_13460c;
        case 0x134614u: goto label_134614;
        case 0x134628u: goto label_134628;
        case 0x13463cu: goto label_13463c;
        case 0x134648u: goto label_134648;
        case 0x134650u: goto label_134650;
        case 0x134664u: goto label_134664;
        case 0x134678u: goto label_134678;
        case 0x134684u: goto label_134684;
        case 0x13468cu: goto label_13468c;
        case 0x1346a0u: goto label_1346a0;
        case 0x1346b4u: goto label_1346b4;
        case 0x1346c0u: goto label_1346c0;
        case 0x1346c8u: goto label_1346c8;
        case 0x1346dcu: goto label_1346dc;
        case 0x1346f0u: goto label_1346f0;
        default: break;
    }

    ctx->pc = 0x1342a8u;

    // 0x1342a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1342a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1342ac: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1342acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1342b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1342b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1342b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1342b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1342b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1342bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1342bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1342c0: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1342c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1342c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1342c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1342c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1342cc: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1342d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1342d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1342d4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1342d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1342d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1342dc: 0x2612dc80  addiu       $s2, $s0, -0x2380
    ctx->pc = 0x1342dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1342e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1342e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1342e4: 0xc049ba4  jal         func_126E90
    ctx->pc = 0x1342E4u;
    SET_GPR_U32(ctx, 31, 0x1342ECu);
    ctx->pc = 0x1342E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342E4u;
    // 0x1342e8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126E90u, 0x1342E4u, 0x1342ECu)) {
        return;
    }
    ctx->pc = 0x1342ECu;
label_1342ec:
    // 0x1342ec: 0xc04e448  jal         func_139120
    ctx->pc = 0x1342ECu;
    SET_GPR_U32(ctx, 31, 0x1342F4u);
    ctx->pc = 0x1342F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342ECu;
    // 0x1342f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1342ECu, 0x1342F4u)) {
        return;
    }
    ctx->pc = 0x1342F4u;
label_1342f4:
    // 0x1342f4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1342F4u;
    SET_GPR_U32(ctx, 31, 0x1342FCu);
    ctx->pc = 0x1342F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342F4u;
    // 0x1342f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1342F4u, 0x1342FCu)) {
        return;
    }
    ctx->pc = 0x1342FCu;
label_1342fc:
    // 0x1342fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1342FCu;
    {
        const bool branch_taken_0x1342fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342FCu;
        // 0x134300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342fc) {
            ctx->pc = 0x134324u;
            goto label_134324;
        }
    }
    ctx->pc = 0x134304u;
    // 0x134304: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134308: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134308u;
    SET_GPR_U32(ctx, 31, 0x134310u);
    ctx->pc = 0x13430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134308u;
    // 0x13430c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134308u, 0x134310u)) {
        return;
    }
    ctx->pc = 0x134310u;
label_134310:
    // 0x134310: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134310u;
    {
        const bool branch_taken_0x134310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134310u;
        // 0x134314: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134310) {
            ctx->pc = 0x134324u;
            goto label_134324;
        }
    }
    ctx->pc = 0x134318u;
    // 0x134318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13431c: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x13431Cu;
    SET_GPR_U32(ctx, 31, 0x134324u);
    ctx->pc = 0x134320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13431Cu;
    // 0x134320: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x13431Cu, 0x134324u)) {
        return;
    }
    ctx->pc = 0x134324u;
label_134324:
    // 0x134324: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x134324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134328: 0xc04e448  jal         func_139120
    ctx->pc = 0x134328u;
    SET_GPR_U32(ctx, 31, 0x134330u);
    ctx->pc = 0x13432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134328u;
    // 0x13432c: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134328u, 0x134330u)) {
        return;
    }
    ctx->pc = 0x134330u;
label_134330:
    // 0x134330: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134330u;
    SET_GPR_U32(ctx, 31, 0x134338u);
    ctx->pc = 0x134334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134330u;
    // 0x134334: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134330u, 0x134338u)) {
        return;
    }
    ctx->pc = 0x134338u;
label_134338:
    // 0x134338: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134338u;
    {
        const bool branch_taken_0x134338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134338u;
        // 0x13433c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134338) {
            ctx->pc = 0x134360u;
            goto label_134360;
        }
    }
    ctx->pc = 0x134340u;
    // 0x134340: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134344: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134344u;
    SET_GPR_U32(ctx, 31, 0x13434Cu);
    ctx->pc = 0x134348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134344u;
    // 0x134348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134344u, 0x13434Cu)) {
        return;
    }
    ctx->pc = 0x13434Cu;
label_13434c:
    // 0x13434c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13434Cu;
    {
        const bool branch_taken_0x13434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13434Cu;
        // 0x134350: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13434c) {
            ctx->pc = 0x134360u;
            goto label_134360;
        }
    }
    ctx->pc = 0x134354u;
    // 0x134354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134358: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x134358u;
    SET_GPR_U32(ctx, 31, 0x134360u);
    ctx->pc = 0x13435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134358u;
    // 0x13435c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x134358u, 0x134360u)) {
        return;
    }
    ctx->pc = 0x134360u;
label_134360:
    // 0x134360: 0xc6210bdc  lwc1        $f1, 0xBDC($s1)
    ctx->pc = 0x134360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13436c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13436cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x134370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134374: 0x0  nop
    ctx->pc = 0x134374u;
    // NOP
    // 0x134378: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x134378u;
    {
        const bool branch_taken_0x134378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134378u;
        // 0x13437c: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134378) {
            ctx->pc = 0x13439Cu;
            goto label_13439c;
        }
    }
    ctx->pc = 0x134380u;
    // 0x134380: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x134380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134384: 0x0  nop
    ctx->pc = 0x134384u;
    // NOP
    // 0x134388: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x134388u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x13438c: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x13438cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134390: 0x0  nop
    ctx->pc = 0x134390u;
    // NOP
    // 0x134394: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x134394u;
    {
        const bool branch_taken_0x134394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134394) {
            ctx->pc = 0x134398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134394u;
            // 0x134398: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13439Cu;
            goto label_13439c;
        }
    }
    ctx->pc = 0x13439Cu;
label_13439c:
    // 0x13439c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1343a0: 0xc04e448  jal         func_139120
    ctx->pc = 0x1343A0u;
    SET_GPR_U32(ctx, 31, 0x1343A8u);
    ctx->pc = 0x1343A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343A0u;
    // 0x1343a4: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1343A0u, 0x1343A8u)) {
        return;
    }
    ctx->pc = 0x1343A8u;
label_1343a8:
    // 0x1343a8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1343A8u;
    SET_GPR_U32(ctx, 31, 0x1343B0u);
    ctx->pc = 0x1343ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343A8u;
    // 0x1343ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1343A8u, 0x1343B0u)) {
        return;
    }
    ctx->pc = 0x1343B0u;
label_1343b0:
    // 0x1343b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1343B0u;
    {
        const bool branch_taken_0x1343b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343B0u;
        // 0x1343b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343b0) {
            ctx->pc = 0x1343D8u;
            goto label_1343d8;
        }
    }
    ctx->pc = 0x1343B8u;
    // 0x1343b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1343b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343bc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1343BCu;
    SET_GPR_U32(ctx, 31, 0x1343C4u);
    ctx->pc = 0x1343C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343BCu;
    // 0x1343c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1343BCu, 0x1343C4u)) {
        return;
    }
    ctx->pc = 0x1343C4u;
label_1343c4:
    // 0x1343c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1343C4u;
    {
        const bool branch_taken_0x1343c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343C4u;
        // 0x1343c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343c4) {
            ctx->pc = 0x1343D8u;
            goto label_1343d8;
        }
    }
    ctx->pc = 0x1343CCu;
    // 0x1343cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1343ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343d0: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1343D0u;
    SET_GPR_U32(ctx, 31, 0x1343D8u);
    ctx->pc = 0x1343D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343D0u;
    // 0x1343d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1343D0u, 0x1343D8u)) {
        return;
    }
    ctx->pc = 0x1343D8u;
label_1343d8:
    // 0x1343d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1343d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1343dc: 0xc04e448  jal         func_139120
    ctx->pc = 0x1343DCu;
    SET_GPR_U32(ctx, 31, 0x1343E4u);
    ctx->pc = 0x1343E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343DCu;
    // 0x1343e0: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1343DCu, 0x1343E4u)) {
        return;
    }
    ctx->pc = 0x1343E4u;
label_1343e4:
    // 0x1343e4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1343E4u;
    SET_GPR_U32(ctx, 31, 0x1343ECu);
    ctx->pc = 0x1343E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343E4u;
    // 0x1343e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1343E4u, 0x1343ECu)) {
        return;
    }
    ctx->pc = 0x1343ECu;
label_1343ec:
    // 0x1343ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1343ECu;
    {
        const bool branch_taken_0x1343ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343ECu;
        // 0x1343f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343ec) {
            ctx->pc = 0x134414u;
            goto label_134414;
        }
    }
    ctx->pc = 0x1343F4u;
    // 0x1343f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343f8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1343F8u;
    SET_GPR_U32(ctx, 31, 0x134400u);
    ctx->pc = 0x1343FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343F8u;
    // 0x1343fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1343F8u, 0x134400u)) {
        return;
    }
    ctx->pc = 0x134400u;
label_134400:
    // 0x134400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134400u;
    {
        const bool branch_taken_0x134400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134400u;
        // 0x134404: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134400) {
            ctx->pc = 0x134414u;
            goto label_134414;
        }
    }
    ctx->pc = 0x134408u;
    // 0x134408: 0xc62c0bd8  lwc1        $f12, 0xBD8($s1)
    ctx->pc = 0x134408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13440c: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x13440Cu;
    SET_GPR_U32(ctx, 31, 0x134414u);
    ctx->pc = 0x134410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13440Cu;
    // 0x134410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x13440Cu, 0x134414u)) {
        return;
    }
    ctx->pc = 0x134414u;
label_134414:
    // 0x134414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134418: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x134418u;
    SET_GPR_U32(ctx, 31, 0x134420u);
    ctx->pc = 0x13441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134418u;
    // 0x13441c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x134418u, 0x134420u)) {
        return;
    }
    ctx->pc = 0x134420u;
label_134420:
    // 0x134420: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x134424: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x134424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x134428: 0xc04e448  jal         func_139120
    ctx->pc = 0x134428u;
    SET_GPR_U32(ctx, 31, 0x134430u);
    ctx->pc = 0x13442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134428u;
    // 0x13442c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134428u, 0x134430u)) {
        return;
    }
    ctx->pc = 0x134430u;
label_134430:
    // 0x134430: 0x2612d530  addiu       $s2, $s0, -0x2AD0
    ctx->pc = 0x134430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956336));
    // 0x134434: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134434u;
    SET_GPR_U32(ctx, 31, 0x13443Cu);
    ctx->pc = 0x134438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134434u;
    // 0x134438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134434u, 0x13443Cu)) {
        return;
    }
    ctx->pc = 0x13443Cu;
label_13443c:
    // 0x13443c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13443Cu;
    {
        const bool branch_taken_0x13443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13443Cu;
        // 0x134440: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13443c) {
            ctx->pc = 0x134468u;
            goto label_134468;
        }
    }
    ctx->pc = 0x134444u;
    // 0x134444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134448: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134448u;
    SET_GPR_U32(ctx, 31, 0x134450u);
    ctx->pc = 0x13444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134448u;
    // 0x13444c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134448u, 0x134450u)) {
        return;
    }
    ctx->pc = 0x134450u;
label_134450:
    // 0x134450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134450u;
    {
        const bool branch_taken_0x134450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134450u;
        // 0x134454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134450) {
            ctx->pc = 0x134468u;
            goto label_134468;
        }
    }
    ctx->pc = 0x134458u;
    // 0x134458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13445c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13445cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134460: 0xc07d32a  jal         func_1F4CA8
    ctx->pc = 0x134460u;
    SET_GPR_U32(ctx, 31, 0x134468u);
    ctx->pc = 0x134464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134460u;
    // 0x134464: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CA8u, 0x134460u, 0x134468u)) {
        return;
    }
    ctx->pc = 0x134468u;
label_134468:
    // 0x134468: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x134468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13446c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13446cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134470: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134474: 0xc04f0f4  jal         func_13C3D0
    ctx->pc = 0x134474u;
    SET_GPR_U32(ctx, 31, 0x13447Cu);
    ctx->pc = 0x134478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134474u;
    // 0x134478: 0x2673d530  addiu       $s3, $s3, -0x2AD0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x134474u, 0x13447Cu)) {
        return;
    }
    ctx->pc = 0x13447Cu;
label_13447c:
    // 0x13447c: 0xc04e448  jal         func_139120
    ctx->pc = 0x13447Cu;
    SET_GPR_U32(ctx, 31, 0x134484u);
    ctx->pc = 0x134480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13447Cu;
    // 0x134480: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x13447Cu, 0x134484u)) {
        return;
    }
    ctx->pc = 0x134484u;
label_134484:
    // 0x134484: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134484u;
    SET_GPR_U32(ctx, 31, 0x13448Cu);
    ctx->pc = 0x134488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134484u;
    // 0x134488: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134484u, 0x13448Cu)) {
        return;
    }
    ctx->pc = 0x13448Cu;
label_13448c:
    // 0x13448c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13448Cu;
    {
        const bool branch_taken_0x13448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13448Cu;
        // 0x134490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13448c) {
            ctx->pc = 0x1344B8u;
            goto label_1344b8;
        }
    }
    ctx->pc = 0x134494u;
    // 0x134494: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134498: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134498u;
    SET_GPR_U32(ctx, 31, 0x1344A0u);
    ctx->pc = 0x13449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134498u;
    // 0x13449c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134498u, 0x1344A0u)) {
        return;
    }
    ctx->pc = 0x1344A0u;
label_1344a0:
    // 0x1344a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1344A0u;
    {
        const bool branch_taken_0x1344a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344A0u;
        // 0x1344a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344a0) {
            ctx->pc = 0x1344B8u;
            goto label_1344b8;
        }
    }
    ctx->pc = 0x1344A8u;
    // 0x1344a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1344a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1344acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344b0: 0xc07d32a  jal         func_1F4CA8
    ctx->pc = 0x1344B0u;
    SET_GPR_U32(ctx, 31, 0x1344B8u);
    ctx->pc = 0x1344B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344B0u;
    // 0x1344b4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CA8u, 0x1344B0u, 0x1344B8u)) {
        return;
    }
    ctx->pc = 0x1344B8u;
label_1344b8:
    // 0x1344b8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1344b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1344bc: 0xc04e448  jal         func_139120
    ctx->pc = 0x1344BCu;
    SET_GPR_U32(ctx, 31, 0x1344C4u);
    ctx->pc = 0x1344C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344BCu;
    // 0x1344c0: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1344BCu, 0x1344C4u)) {
        return;
    }
    ctx->pc = 0x1344C4u;
label_1344c4:
    // 0x1344c4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1344C4u;
    SET_GPR_U32(ctx, 31, 0x1344CCu);
    ctx->pc = 0x1344C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344C4u;
    // 0x1344c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1344C4u, 0x1344CCu)) {
        return;
    }
    ctx->pc = 0x1344CCu;
label_1344cc:
    // 0x1344cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1344CCu;
    {
        const bool branch_taken_0x1344cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344CCu;
        // 0x1344d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344cc) {
            ctx->pc = 0x1344F4u;
            goto label_1344f4;
        }
    }
    ctx->pc = 0x1344D4u;
    // 0x1344d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1344d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344d8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1344D8u;
    SET_GPR_U32(ctx, 31, 0x1344E0u);
    ctx->pc = 0x1344DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344D8u;
    // 0x1344dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1344D8u, 0x1344E0u)) {
        return;
    }
    ctx->pc = 0x1344E0u;
label_1344e0:
    // 0x1344e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1344E0u;
    {
        const bool branch_taken_0x1344e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344E0u;
        // 0x1344e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344e0) {
            ctx->pc = 0x1344F4u;
            goto label_1344f4;
        }
    }
    ctx->pc = 0x1344E8u;
    // 0x1344e8: 0x8e261b84  lw          $a2, 0x1B84($s1)
    ctx->pc = 0x1344e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7044)));
    // 0x1344ec: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x1344ECu;
    SET_GPR_U32(ctx, 31, 0x1344F4u);
    ctx->pc = 0x1344F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344ECu;
    // 0x1344f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x1344ECu, 0x1344F4u)) {
        return;
    }
    ctx->pc = 0x1344F4u;
label_1344f4:
    // 0x1344f4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1344f8: 0xc04e448  jal         func_139120
    ctx->pc = 0x1344F8u;
    SET_GPR_U32(ctx, 31, 0x134500u);
    ctx->pc = 0x1344FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344F8u;
    // 0x1344fc: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1344F8u, 0x134500u)) {
        return;
    }
    ctx->pc = 0x134500u;
label_134500:
    // 0x134500: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134500u;
    SET_GPR_U32(ctx, 31, 0x134508u);
    ctx->pc = 0x134504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134500u;
    // 0x134504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134500u, 0x134508u)) {
        return;
    }
    ctx->pc = 0x134508u;
label_134508:
    // 0x134508: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134508u;
    {
        const bool branch_taken_0x134508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134508u;
        // 0x13450c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134508) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x134510u;
    // 0x134510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134514: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134514u;
    SET_GPR_U32(ctx, 31, 0x13451Cu);
    ctx->pc = 0x134518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134514u;
    // 0x134518: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134514u, 0x13451Cu)) {
        return;
    }
    ctx->pc = 0x13451Cu;
label_13451c:
    // 0x13451c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13451Cu;
    {
        const bool branch_taken_0x13451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13451Cu;
        // 0x134520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13451c) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x134524u;
    // 0x134524: 0x8e261b8c  lw          $a2, 0x1B8C($s1)
    ctx->pc = 0x134524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7052)));
    // 0x134528: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134528u;
    SET_GPR_U32(ctx, 31, 0x134530u);
    ctx->pc = 0x13452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134528u;
    // 0x13452c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x134528u, 0x134530u)) {
        return;
    }
    ctx->pc = 0x134530u;
label_134530:
    // 0x134530: 0xc6210bdc  lwc1        $f1, 0xBDC($s1)
    ctx->pc = 0x134530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134538: 0x0  nop
    ctx->pc = 0x134538u;
    // NOP
    // 0x13453c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13453cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134540: 0x0  nop
    ctx->pc = 0x134540u;
    // NOP
    // 0x134544: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x134544u;
    {
        const bool branch_taken_0x134544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x134548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134544u;
        // 0x134548: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134544) {
            ctx->pc = 0x1345C8u;
            goto label_1345c8;
        }
    }
    ctx->pc = 0x13454Cu;
    // 0x13454c: 0xc04e448  jal         func_139120
    ctx->pc = 0x13454Cu;
    SET_GPR_U32(ctx, 31, 0x134554u);
    ctx->pc = 0x134550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13454Cu;
    // 0x134550: 0x2691dc80  addiu       $s1, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x13454Cu, 0x134554u)) {
        return;
    }
    ctx->pc = 0x134554u;
label_134554:
    // 0x134554: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134554u;
    SET_GPR_U32(ctx, 31, 0x13455Cu);
    ctx->pc = 0x134558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134554u;
    // 0x134558: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134554u, 0x13455Cu)) {
        return;
    }
    ctx->pc = 0x13455Cu;
label_13455c:
    // 0x13455c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13455Cu;
    {
        const bool branch_taken_0x13455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13455Cu;
        // 0x134560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13455c) {
            ctx->pc = 0x134584u;
            goto label_134584;
        }
    }
    ctx->pc = 0x134564u;
    // 0x134564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134568: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134568u;
    SET_GPR_U32(ctx, 31, 0x134570u);
    ctx->pc = 0x13456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134568u;
    // 0x13456c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134568u, 0x134570u)) {
        return;
    }
    ctx->pc = 0x134570u;
label_134570:
    // 0x134570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134570u;
    {
        const bool branch_taken_0x134570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134570u;
        // 0x134574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134570) {
            ctx->pc = 0x134584u;
            goto label_134584;
        }
    }
    ctx->pc = 0x134578u;
    // 0x134578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13457c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x13457Cu;
    SET_GPR_U32(ctx, 31, 0x134584u);
    ctx->pc = 0x134580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13457Cu;
    // 0x134580: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x13457Cu, 0x134584u)) {
        return;
    }
    ctx->pc = 0x134584u;
label_134584:
    // 0x134584: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x134584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134588: 0xc04e448  jal         func_139120
    ctx->pc = 0x134588u;
    SET_GPR_U32(ctx, 31, 0x134590u);
    ctx->pc = 0x13458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134588u;
    // 0x13458c: 0x2690dc80  addiu       $s0, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134588u, 0x134590u)) {
        return;
    }
    ctx->pc = 0x134590u;
label_134590:
    // 0x134590: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134590u;
    SET_GPR_U32(ctx, 31, 0x134598u);
    ctx->pc = 0x134594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134590u;
    // 0x134594: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134590u, 0x134598u)) {
        return;
    }
    ctx->pc = 0x134598u;
label_134598:
    // 0x134598: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x134598u;
    {
        const bool branch_taken_0x134598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134598u;
        // 0x13459c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134598) {
            ctx->pc = 0x1346F0u;
            goto label_1346f0;
        }
    }
    ctx->pc = 0x1345A0u;
    // 0x1345a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1345a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345a4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1345A4u;
    SET_GPR_U32(ctx, 31, 0x1345ACu);
    ctx->pc = 0x1345A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345A4u;
    // 0x1345a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1345A4u, 0x1345ACu)) {
        return;
    }
    ctx->pc = 0x1345ACu;
label_1345ac:
    // 0x1345ac: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1345ACu;
    {
        const bool branch_taken_0x1345ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ACu;
        // 0x1345b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ac) {
            ctx->pc = 0x1346F0u;
            goto label_1346f0;
        }
    }
    ctx->pc = 0x1345B4u;
    // 0x1345b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1345b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345b8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1345B8u;
    SET_GPR_U32(ctx, 31, 0x1345C0u);
    ctx->pc = 0x1345BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345B8u;
    // 0x1345bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1345B8u, 0x1345C0u)) {
        return;
    }
    ctx->pc = 0x1345C0u;
label_1345c0:
    // 0x1345c0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1345C0u;
    {
        const bool branch_taken_0x1345c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345C0u;
        // 0x1345c4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345c0) {
            ctx->pc = 0x1346F4u;
            goto label_1346f4;
        }
    }
    ctx->pc = 0x1345C8u;
label_1345c8:
    // 0x1345c8: 0xc04e448  jal         func_139120
    ctx->pc = 0x1345C8u;
    SET_GPR_U32(ctx, 31, 0x1345D0u);
    ctx->pc = 0x1345CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345C8u;
    // 0x1345cc: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1345C8u, 0x1345D0u)) {
        return;
    }
    ctx->pc = 0x1345D0u;
label_1345d0:
    // 0x1345d0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1345D0u;
    SET_GPR_U32(ctx, 31, 0x1345D8u);
    ctx->pc = 0x1345D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345D0u;
    // 0x1345d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1345D0u, 0x1345D8u)) {
        return;
    }
    ctx->pc = 0x1345D8u;
label_1345d8:
    // 0x1345d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1345D8u;
    {
        const bool branch_taken_0x1345d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345D8u;
        // 0x1345dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345d8) {
            ctx->pc = 0x134600u;
            goto label_134600;
        }
    }
    ctx->pc = 0x1345E0u;
    // 0x1345e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1345e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345e4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1345E4u;
    SET_GPR_U32(ctx, 31, 0x1345ECu);
    ctx->pc = 0x1345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345E4u;
    // 0x1345e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1345E4u, 0x1345ECu)) {
        return;
    }
    ctx->pc = 0x1345ECu;
label_1345ec:
    // 0x1345ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1345ECu;
    {
        const bool branch_taken_0x1345ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ECu;
        // 0x1345f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ec) {
            ctx->pc = 0x134600u;
            goto label_134600;
        }
    }
    ctx->pc = 0x1345F4u;
    // 0x1345f4: 0x8e261988  lw          $a2, 0x1988($s1)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6536)));
    // 0x1345f8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1345F8u;
    SET_GPR_U32(ctx, 31, 0x134600u);
    ctx->pc = 0x1345FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345F8u;
    // 0x1345fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1345F8u, 0x134600u)) {
        return;
    }
    ctx->pc = 0x134600u;
label_134600:
    // 0x134600: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x134600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134604: 0xc04e448  jal         func_139120
    ctx->pc = 0x134604u;
    SET_GPR_U32(ctx, 31, 0x13460Cu);
    ctx->pc = 0x134608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134604u;
    // 0x134608: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134604u, 0x13460Cu)) {
        return;
    }
    ctx->pc = 0x13460Cu;
label_13460c:
    // 0x13460c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x13460Cu;
    SET_GPR_U32(ctx, 31, 0x134614u);
    ctx->pc = 0x134610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13460Cu;
    // 0x134610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x13460Cu, 0x134614u)) {
        return;
    }
    ctx->pc = 0x134614u;
label_134614:
    // 0x134614: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134614u;
    {
        const bool branch_taken_0x134614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134614u;
        // 0x134618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134614) {
            ctx->pc = 0x13463Cu;
            goto label_13463c;
        }
    }
    ctx->pc = 0x13461Cu;
    // 0x13461c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134620: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134620u;
    SET_GPR_U32(ctx, 31, 0x134628u);
    ctx->pc = 0x134624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134620u;
    // 0x134624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134620u, 0x134628u)) {
        return;
    }
    ctx->pc = 0x134628u;
label_134628:
    // 0x134628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134628u;
    {
        const bool branch_taken_0x134628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134628u;
        // 0x13462c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134628) {
            ctx->pc = 0x13463Cu;
            goto label_13463c;
        }
    }
    ctx->pc = 0x134630u;
    // 0x134630: 0x8e261524  lw          $a2, 0x1524($s1)
    ctx->pc = 0x134630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5412)));
    // 0x134634: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x134634u;
    SET_GPR_U32(ctx, 31, 0x13463Cu);
    ctx->pc = 0x134638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134634u;
    // 0x134638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x134634u, 0x13463Cu)) {
        return;
    }
    ctx->pc = 0x13463Cu;
label_13463c:
    // 0x13463c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134640: 0xc04e448  jal         func_139120
    ctx->pc = 0x134640u;
    SET_GPR_U32(ctx, 31, 0x134648u);
    ctx->pc = 0x134644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134640u;
    // 0x134644: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134640u, 0x134648u)) {
        return;
    }
    ctx->pc = 0x134648u;
label_134648:
    // 0x134648: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134648u;
    SET_GPR_U32(ctx, 31, 0x134650u);
    ctx->pc = 0x13464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134648u;
    // 0x13464c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134648u, 0x134650u)) {
        return;
    }
    ctx->pc = 0x134650u;
label_134650:
    // 0x134650: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134650u;
    {
        const bool branch_taken_0x134650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134650u;
        // 0x134654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134650) {
            ctx->pc = 0x134678u;
            goto label_134678;
        }
    }
    ctx->pc = 0x134658u;
    // 0x134658: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13465c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x13465Cu;
    SET_GPR_U32(ctx, 31, 0x134664u);
    ctx->pc = 0x134660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13465Cu;
    // 0x134660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x13465Cu, 0x134664u)) {
        return;
    }
    ctx->pc = 0x134664u;
label_134664:
    // 0x134664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134664u;
    {
        const bool branch_taken_0x134664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134664u;
        // 0x134668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134664) {
            ctx->pc = 0x134678u;
            goto label_134678;
        }
    }
    ctx->pc = 0x13466Cu;
    // 0x13466c: 0xc62c1abc  lwc1        $f12, 0x1ABC($s1)
    ctx->pc = 0x13466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x134670: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x134670u;
    SET_GPR_U32(ctx, 31, 0x134678u);
    ctx->pc = 0x134674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134670u;
    // 0x134674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x134670u, 0x134678u)) {
        return;
    }
    ctx->pc = 0x134678u;
label_134678:
    // 0x134678: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x134678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13467c: 0xc04e448  jal         func_139120
    ctx->pc = 0x13467Cu;
    SET_GPR_U32(ctx, 31, 0x134684u);
    ctx->pc = 0x134680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13467Cu;
    // 0x134680: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x13467Cu, 0x134684u)) {
        return;
    }
    ctx->pc = 0x134684u;
label_134684:
    // 0x134684: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134684u;
    SET_GPR_U32(ctx, 31, 0x13468Cu);
    ctx->pc = 0x134688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134684u;
    // 0x134688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134684u, 0x13468Cu)) {
        return;
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13468Cu;
    {
        const bool branch_taken_0x13468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13468Cu;
        // 0x134690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13468c) {
            ctx->pc = 0x1346B4u;
            goto label_1346b4;
        }
    }
    ctx->pc = 0x134694u;
    // 0x134694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134698: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134698u;
    SET_GPR_U32(ctx, 31, 0x1346A0u);
    ctx->pc = 0x13469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134698u;
    // 0x13469c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134698u, 0x1346A0u)) {
        return;
    }
    ctx->pc = 0x1346A0u;
label_1346a0:
    // 0x1346a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1346A0u;
    {
        const bool branch_taken_0x1346a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346A0u;
        // 0x1346a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346a0) {
            ctx->pc = 0x1346B4u;
            goto label_1346b4;
        }
    }
    ctx->pc = 0x1346A8u;
    // 0x1346a8: 0xc62c1acc  lwc1        $f12, 0x1ACC($s1)
    ctx->pc = 0x1346a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1346ac: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1346ACu;
    SET_GPR_U32(ctx, 31, 0x1346B4u);
    ctx->pc = 0x1346B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346ACu;
    // 0x1346b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1346ACu, 0x1346B4u)) {
        return;
    }
    ctx->pc = 0x1346B4u;
label_1346b4:
    // 0x1346b4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1346b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1346b8: 0xc04e448  jal         func_139120
    ctx->pc = 0x1346B8u;
    SET_GPR_U32(ctx, 31, 0x1346C0u);
    ctx->pc = 0x1346BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346B8u;
    // 0x1346bc: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1346B8u, 0x1346C0u)) {
        return;
    }
    ctx->pc = 0x1346C0u;
label_1346c0:
    // 0x1346c0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1346C0u;
    SET_GPR_U32(ctx, 31, 0x1346C8u);
    ctx->pc = 0x1346C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346C0u;
    // 0x1346c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1346C0u, 0x1346C8u)) {
        return;
    }
    ctx->pc = 0x1346C8u;
label_1346c8:
    // 0x1346c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1346C8u;
    {
        const bool branch_taken_0x1346c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C8u;
        // 0x1346cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346c8) {
            ctx->pc = 0x1346F0u;
            goto label_1346f0;
        }
    }
    ctx->pc = 0x1346D0u;
    // 0x1346d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1346d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346d4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1346D4u;
    SET_GPR_U32(ctx, 31, 0x1346DCu);
    ctx->pc = 0x1346D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346D4u;
    // 0x1346d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1346D4u, 0x1346DCu)) {
        return;
    }
    ctx->pc = 0x1346DCu;
label_1346dc:
    // 0x1346dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1346DCu;
    {
        const bool branch_taken_0x1346dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346DCu;
        // 0x1346e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346dc) {
            ctx->pc = 0x1346F0u;
            goto label_1346f0;
        }
    }
    ctx->pc = 0x1346E4u;
    // 0x1346e4: 0xc62c1ab4  lwc1        $f12, 0x1AB4($s1)
    ctx->pc = 0x1346e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1346e8: 0xc07d30c  jal         func_1F4C30
    ctx->pc = 0x1346E8u;
    SET_GPR_U32(ctx, 31, 0x1346F0u);
    ctx->pc = 0x1346ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346E8u;
    // 0x1346ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C30u, 0x1346E8u, 0x1346F0u)) {
        return;
    }
    ctx->pc = 0x1346F0u;
label_1346f0:
    // 0x1346f0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1346f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1346f4:
    // 0x1346f4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1346f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1346f8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1346f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1346fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1346fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134700: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134704: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134708: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x134708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13470c: 0x3e00008  jr          $ra
    ctx->pc = 0x13470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13470Cu;
        // 0x134710: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134714u;
    // 0x134714: 0x0  nop
    ctx->pc = 0x134714u;
    // NOP
    ctx->pc = 0x134718u;
}
