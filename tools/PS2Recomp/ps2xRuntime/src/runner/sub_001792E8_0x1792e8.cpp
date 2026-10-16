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

// Function: sub_001792E8
// Address: 0x1792e8 - 0x1794c8
void sub_001792E8_0x1792e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001792E8_0x1792e8");
#endif

    switch (ctx->pc) {
        case 0x1792e8u: goto label_1792e8;
        case 0x1792ecu: goto label_1792ec;
        case 0x1792f0u: goto label_1792f0;
        case 0x1792f4u: goto label_1792f4;
        case 0x1792f8u: goto label_1792f8;
        case 0x1792fcu: goto label_1792fc;
        case 0x179300u: goto label_179300;
        case 0x179304u: goto label_179304;
        case 0x179308u: goto label_179308;
        case 0x17930cu: goto label_17930c;
        case 0x179310u: goto label_179310;
        case 0x179314u: goto label_179314;
        case 0x179318u: goto label_179318;
        case 0x17931cu: goto label_17931c;
        case 0x179320u: goto label_179320;
        case 0x179324u: goto label_179324;
        case 0x179328u: goto label_179328;
        case 0x17932cu: goto label_17932c;
        case 0x179330u: goto label_179330;
        case 0x179334u: goto label_179334;
        case 0x179338u: goto label_179338;
        case 0x17933cu: goto label_17933c;
        case 0x179340u: goto label_179340;
        case 0x179344u: goto label_179344;
        case 0x179348u: goto label_179348;
        case 0x17934cu: goto label_17934c;
        case 0x179350u: goto label_179350;
        case 0x179354u: goto label_179354;
        case 0x179358u: goto label_179358;
        case 0x17935cu: goto label_17935c;
        case 0x179360u: goto label_179360;
        case 0x179364u: goto label_179364;
        case 0x179368u: goto label_179368;
        case 0x17936cu: goto label_17936c;
        case 0x179370u: goto label_179370;
        case 0x179374u: goto label_179374;
        case 0x179378u: goto label_179378;
        case 0x17937cu: goto label_17937c;
        case 0x179380u: goto label_179380;
        case 0x179384u: goto label_179384;
        case 0x179388u: goto label_179388;
        case 0x17938cu: goto label_17938c;
        case 0x179390u: goto label_179390;
        case 0x179394u: goto label_179394;
        case 0x179398u: goto label_179398;
        case 0x17939cu: goto label_17939c;
        case 0x1793a0u: goto label_1793a0;
        case 0x1793a4u: goto label_1793a4;
        case 0x1793a8u: goto label_1793a8;
        case 0x1793acu: goto label_1793ac;
        case 0x1793b0u: goto label_1793b0;
        case 0x1793b4u: goto label_1793b4;
        case 0x1793b8u: goto label_1793b8;
        case 0x1793bcu: goto label_1793bc;
        case 0x1793c0u: goto label_1793c0;
        case 0x1793c4u: goto label_1793c4;
        case 0x1793c8u: goto label_1793c8;
        case 0x1793ccu: goto label_1793cc;
        case 0x1793d0u: goto label_1793d0;
        case 0x1793d4u: goto label_1793d4;
        case 0x1793d8u: goto label_1793d8;
        case 0x1793dcu: goto label_1793dc;
        case 0x1793e0u: goto label_1793e0;
        case 0x1793e4u: goto label_1793e4;
        case 0x1793e8u: goto label_1793e8;
        case 0x1793ecu: goto label_1793ec;
        case 0x1793f0u: goto label_1793f0;
        case 0x1793f4u: goto label_1793f4;
        case 0x1793f8u: goto label_1793f8;
        case 0x1793fcu: goto label_1793fc;
        case 0x179400u: goto label_179400;
        case 0x179404u: goto label_179404;
        case 0x179408u: goto label_179408;
        case 0x17940cu: goto label_17940c;
        case 0x179410u: goto label_179410;
        case 0x179414u: goto label_179414;
        case 0x179418u: goto label_179418;
        case 0x17941cu: goto label_17941c;
        case 0x179420u: goto label_179420;
        case 0x179424u: goto label_179424;
        case 0x179428u: goto label_179428;
        case 0x17942cu: goto label_17942c;
        case 0x179430u: goto label_179430;
        case 0x179434u: goto label_179434;
        case 0x179438u: goto label_179438;
        case 0x17943cu: goto label_17943c;
        case 0x179440u: goto label_179440;
        case 0x179444u: goto label_179444;
        case 0x179448u: goto label_179448;
        case 0x17944cu: goto label_17944c;
        case 0x179450u: goto label_179450;
        case 0x179454u: goto label_179454;
        case 0x179458u: goto label_179458;
        case 0x17945cu: goto label_17945c;
        case 0x179460u: goto label_179460;
        case 0x179464u: goto label_179464;
        case 0x179468u: goto label_179468;
        case 0x17946cu: goto label_17946c;
        case 0x179470u: goto label_179470;
        case 0x179474u: goto label_179474;
        case 0x179478u: goto label_179478;
        case 0x17947cu: goto label_17947c;
        case 0x179480u: goto label_179480;
        case 0x179484u: goto label_179484;
        case 0x179488u: goto label_179488;
        case 0x17948cu: goto label_17948c;
        case 0x179490u: goto label_179490;
        case 0x179494u: goto label_179494;
        case 0x179498u: goto label_179498;
        case 0x17949cu: goto label_17949c;
        case 0x1794a0u: goto label_1794a0;
        case 0x1794a4u: goto label_1794a4;
        case 0x1794a8u: goto label_1794a8;
        case 0x1794acu: goto label_1794ac;
        case 0x1794b0u: goto label_1794b0;
        case 0x1794b4u: goto label_1794b4;
        case 0x1794b8u: goto label_1794b8;
        case 0x1794bcu: goto label_1794bc;
        case 0x1794c0u: goto label_1794c0;
        case 0x1794c4u: goto label_1794c4;
        default: break;
    }

    ctx->pc = 0x1792e8u;

label_1792e8:
    // 0x1792e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1792e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1792ec:
    // 0x1792ec: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1792ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1792f0:
    // 0x1792f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1792f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1792f4:
    // 0x1792f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1792f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1792f8:
    // 0x1792f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1792f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1792fc:
    // 0x1792fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1792fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_179300:
    // 0x179300: 0x24500fd8  addiu       $s0, $v0, 0xFD8
    ctx->pc = 0x179300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_179304:
    // 0x179304: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x179304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_179308:
    // 0x179308: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17930c:
    // 0x17930c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_179310:
    // 0x179310: 0xc05e57a  jal         func_1795E8
label_179314:
    if (ctx->pc == 0x179314u) {
        ctx->pc = 0x179314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179310u;
        // 0x179314: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179318u;
        goto label_179318;
    }
    ctx->pc = 0x179310u;
    SET_GPR_U32(ctx, 31, 0x179318u);
    ctx->pc = 0x179314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179310u;
    // 0x179314: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1795E8u, 0x179310u, 0x179318u)) {
        return;
    }
    ctx->pc = 0x179318u;
label_179318:
    // 0x179318: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17931c:
    // 0x17931c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_179320:
    // 0x179320: 0x40f809  jalr        $v0
label_179324:
    if (ctx->pc == 0x179324u) {
        ctx->pc = 0x179324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179320u;
        // 0x179324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179328u;
        goto label_179328;
    }
    ctx->pc = 0x179320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179328u);
        ctx->pc = 0x179324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179320u;
        // 0x179324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179320u, 0x179328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179328u;
label_179328:
    // 0x179328: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17932c:
    // 0x17932c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_179330:
    // 0x179330: 0x40f809  jalr        $v0
label_179334:
    if (ctx->pc == 0x179334u) {
        ctx->pc = 0x179334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179330u;
        // 0x179334: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179338u;
        goto label_179338;
    }
    ctx->pc = 0x179330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179338u);
        ctx->pc = 0x179334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179330u;
        // 0x179334: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179330u, 0x179338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179338u;
label_179338:
    // 0x179338: 0xc0773f4  jal         func_1DCFD0
label_17933c:
    if (ctx->pc == 0x17933Cu) {
        ctx->pc = 0x179340u;
        goto label_179340;
    }
    ctx->pc = 0x179338u;
    SET_GPR_U32(ctx, 31, 0x179340u);
    ctx->pc = 0x1DCFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFD0u, 0x179338u, 0x179340u)) {
        return;
    }
    ctx->pc = 0x179340u;
label_179340:
    // 0x179340: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_179344:
    // 0x179344: 0xc091fdc  jal         func_247F70
label_179348:
    if (ctx->pc == 0x179348u) {
        ctx->pc = 0x17934Cu;
        goto label_17934c;
    }
    ctx->pc = 0x179344u;
    SET_GPR_U32(ctx, 31, 0x17934Cu);
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x179344u, 0x17934Cu)) {
        return;
    }
    ctx->pc = 0x17934Cu;
label_17934c:
    // 0x17934c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x17934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_179350:
    // 0x179350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179354:
    // 0x179354: 0xc097a9e  jal         func_25EA78
label_179358:
    if (ctx->pc == 0x179358u) {
        ctx->pc = 0x179358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179354u;
        // 0x179358: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17935Cu;
        goto label_17935c;
    }
    ctx->pc = 0x179354u;
    SET_GPR_U32(ctx, 31, 0x17935Cu);
    ctx->pc = 0x179358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179354u;
    // 0x179358: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x179354u, 0x17935Cu)) {
        return;
    }
    ctx->pc = 0x17935Cu;
label_17935c:
    // 0x17935c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179360:
    // 0x179360: 0xc056364  jal         func_158D90
label_179364:
    if (ctx->pc == 0x179364u) {
        ctx->pc = 0x179364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179360u;
        // 0x179364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179368u;
        goto label_179368;
    }
    ctx->pc = 0x179360u;
    SET_GPR_U32(ctx, 31, 0x179368u);
    ctx->pc = 0x179364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179360u;
    // 0x179364: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158D90u, 0x179360u, 0x179368u)) {
        return;
    }
    ctx->pc = 0x179368u;
label_179368:
    // 0x179368: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17936c:
    // 0x17936c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_179370:
    // 0x179370: 0x40f809  jalr        $v0
label_179374:
    if (ctx->pc == 0x179374u) {
        ctx->pc = 0x179374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179370u;
        // 0x179374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179378u;
        goto label_179378;
    }
    ctx->pc = 0x179370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179378u);
        ctx->pc = 0x179374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179370u;
        // 0x179374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179370u, 0x179378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179378u;
label_179378:
    // 0x179378: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17937c:
    // 0x17937c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x17937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_179380:
    // 0x179380: 0x40f809  jalr        $v0
label_179384:
    if (ctx->pc == 0x179384u) {
        ctx->pc = 0x179384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179380u;
        // 0x179384: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179388u;
        goto label_179388;
    }
    ctx->pc = 0x179380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179388u);
        ctx->pc = 0x179384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179380u;
        // 0x179384: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179380u, 0x179388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179388u;
label_179388:
    // 0x179388: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x179388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_17938c:
    // 0x17938c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_179390:
    if (ctx->pc == 0x179390u) {
        ctx->pc = 0x179390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17938Cu;
        // 0x179390: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179394u;
        goto label_179394;
    }
    ctx->pc = 0x17938Cu;
    {
        const bool branch_taken_0x17938c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17938Cu;
        // 0x179390: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17938c) {
            ctx->pc = 0x179410u;
            goto label_179410;
        }
    }
    ctx->pc = 0x179394u;
label_179394:
    // 0x179394: 0x8c4384b8  lw          $v1, -0x7B48($v0)
    ctx->pc = 0x179394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935736)));
label_179398:
    // 0x179398: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
label_17939c:
    if (ctx->pc == 0x17939Cu) {
        ctx->pc = 0x17939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179398u;
        // 0x17939c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793A0u;
        goto label_1793a0;
    }
    ctx->pc = 0x179398u;
    {
        const bool branch_taken_0x179398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179398) {
            ctx->pc = 0x17939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179398u;
            // 0x17939c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179414u;
            goto label_179414;
        }
    }
    ctx->pc = 0x1793A0u;
label_1793a0:
    // 0x1793a0: 0xc08939a  jal         func_224E68
label_1793a4:
    if (ctx->pc == 0x1793A4u) {
        ctx->pc = 0x1793A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793A0u;
        // 0x1793a4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793A8u;
        goto label_1793a8;
    }
    ctx->pc = 0x1793A0u;
    SET_GPR_U32(ctx, 31, 0x1793A8u);
    ctx->pc = 0x1793A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793A0u;
    // 0x1793a4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1793A0u, 0x1793A8u)) {
        return;
    }
    ctx->pc = 0x1793A8u;
label_1793a8:
    // 0x1793a8: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1793a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1793ac:
    // 0x1793ac: 0xc097922  jal         func_25E488
label_1793b0:
    if (ctx->pc == 0x1793B0u) {
        ctx->pc = 0x1793B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793ACu;
        // 0x1793b0: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793B4u;
        goto label_1793b4;
    }
    ctx->pc = 0x1793ACu;
    SET_GPR_U32(ctx, 31, 0x1793B4u);
    ctx->pc = 0x1793B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793ACu;
    // 0x1793b0: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1793ACu, 0x1793B4u)) {
        return;
    }
    ctx->pc = 0x1793B4u;
label_1793b4:
    // 0x1793b4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1793b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1793b8:
    // 0x1793b8: 0xc097910  jal         func_25E440
label_1793bc:
    if (ctx->pc == 0x1793BCu) {
        ctx->pc = 0x1793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793B8u;
        // 0x1793bc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793C0u;
        goto label_1793c0;
    }
    ctx->pc = 0x1793B8u;
    SET_GPR_U32(ctx, 31, 0x1793C0u);
    ctx->pc = 0x1793BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793B8u;
    // 0x1793bc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1793B8u, 0x1793C0u)) {
        return;
    }
    ctx->pc = 0x1793C0u;
label_1793c0:
    // 0x1793c0: 0xc0893a2  jal         func_224E88
label_1793c4:
    if (ctx->pc == 0x1793C4u) {
        ctx->pc = 0x1793C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793C0u;
        // 0x1793c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793C8u;
        goto label_1793c8;
    }
    ctx->pc = 0x1793C0u;
    SET_GPR_U32(ctx, 31, 0x1793C8u);
    ctx->pc = 0x1793C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793C0u;
    // 0x1793c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1793C0u, 0x1793C8u)) {
        return;
    }
    ctx->pc = 0x1793C8u;
label_1793c8:
    // 0x1793c8: 0xc051a50  jal         func_146940
label_1793cc:
    if (ctx->pc == 0x1793CCu) {
        ctx->pc = 0x1793D0u;
        goto label_1793d0;
    }
    ctx->pc = 0x1793C8u;
    SET_GPR_U32(ctx, 31, 0x1793D0u);
    ctx->pc = 0x146940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146940u, 0x1793C8u, 0x1793D0u)) {
        return;
    }
    ctx->pc = 0x1793D0u;
label_1793d0:
    // 0x1793d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1793d4:
    // 0x1793d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1793d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1793d8:
    // 0x1793d8: 0x40f809  jalr        $v0
label_1793dc:
    if (ctx->pc == 0x1793DCu) {
        ctx->pc = 0x1793DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793D8u;
        // 0x1793dc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793E0u;
        goto label_1793e0;
    }
    ctx->pc = 0x1793D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1793E0u);
        ctx->pc = 0x1793DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793D8u;
        // 0x1793dc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793D8u, 0x1793E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1793E0u;
label_1793e0:
    // 0x1793e0: 0xc051a72  jal         func_1469C8
label_1793e4:
    if (ctx->pc == 0x1793E4u) {
        ctx->pc = 0x1793E8u;
        goto label_1793e8;
    }
    ctx->pc = 0x1793E0u;
    SET_GPR_U32(ctx, 31, 0x1793E8u);
    ctx->pc = 0x1469C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1469C8u, 0x1793E0u, 0x1793E8u)) {
        return;
    }
    ctx->pc = 0x1793E8u;
label_1793e8:
    // 0x1793e8: 0xc08939a  jal         func_224E68
label_1793ec:
    if (ctx->pc == 0x1793ECu) {
        ctx->pc = 0x1793ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793E8u;
        // 0x1793ec: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793F0u;
        goto label_1793f0;
    }
    ctx->pc = 0x1793E8u;
    SET_GPR_U32(ctx, 31, 0x1793F0u);
    ctx->pc = 0x1793ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793E8u;
    // 0x1793ec: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1793E8u, 0x1793F0u)) {
        return;
    }
    ctx->pc = 0x1793F0u;
label_1793f0:
    // 0x1793f0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1793f4:
    // 0x1793f4: 0xc097922  jal         func_25E488
label_1793f8:
    if (ctx->pc == 0x1793F8u) {
        ctx->pc = 0x1793F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793F4u;
        // 0x1793f8: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1793FCu;
        goto label_1793fc;
    }
    ctx->pc = 0x1793F4u;
    SET_GPR_U32(ctx, 31, 0x1793FCu);
    ctx->pc = 0x1793F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793F4u;
    // 0x1793f8: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E488u, 0x1793F4u, 0x1793FCu)) {
        return;
    }
    ctx->pc = 0x1793FCu;
label_1793fc:
    // 0x1793fc: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_179400:
    // 0x179400: 0xc097910  jal         func_25E440
label_179404:
    if (ctx->pc == 0x179404u) {
        ctx->pc = 0x179404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179400u;
        // 0x179404: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179408u;
        goto label_179408;
    }
    ctx->pc = 0x179400u;
    SET_GPR_U32(ctx, 31, 0x179408u);
    ctx->pc = 0x179404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179400u;
    // 0x179404: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x179400u, 0x179408u)) {
        return;
    }
    ctx->pc = 0x179408u;
label_179408:
    // 0x179408: 0xc0893a2  jal         func_224E88
label_17940c:
    if (ctx->pc == 0x17940Cu) {
        ctx->pc = 0x17940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179408u;
        // 0x17940c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179410u;
        goto label_179410;
    }
    ctx->pc = 0x179408u;
    SET_GPR_U32(ctx, 31, 0x179410u);
    ctx->pc = 0x17940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179408u;
    // 0x17940c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x179408u, 0x179410u)) {
        return;
    }
    ctx->pc = 0x179410u;
label_179410:
    // 0x179410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179414:
    // 0x179414: 0xc091fdc  jal         func_247F70
label_179418:
    if (ctx->pc == 0x179418u) {
        ctx->pc = 0x179418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179414u;
        // 0x179418: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17941Cu;
        goto label_17941c;
    }
    ctx->pc = 0x179414u;
    SET_GPR_U32(ctx, 31, 0x17941Cu);
    ctx->pc = 0x179418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179414u;
    // 0x179418: 0x26700fd8  addiu       $s0, $s3, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x179414u, 0x17941Cu)) {
        return;
    }
    ctx->pc = 0x17941Cu;
label_17941c:
    // 0x17941c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179420:
    // 0x179420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179424:
    // 0x179424: 0xc097b28  jal         func_25ECA0
label_179428:
    if (ctx->pc == 0x179428u) {
        ctx->pc = 0x179428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179424u;
        // 0x179428: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17942Cu;
        goto label_17942c;
    }
    ctx->pc = 0x179424u;
    SET_GPR_U32(ctx, 31, 0x17942Cu);
    ctx->pc = 0x179428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179424u;
    // 0x179428: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x179424u, 0x17942Cu)) {
        return;
    }
    ctx->pc = 0x17942Cu;
label_17942c:
    // 0x17942c: 0xc05e598  jal         func_179660
label_179430:
    if (ctx->pc == 0x179430u) {
        ctx->pc = 0x179430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17942Cu;
        // 0x179430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179434u;
        goto label_179434;
    }
    ctx->pc = 0x17942Cu;
    SET_GPR_U32(ctx, 31, 0x179434u);
    ctx->pc = 0x179430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17942Cu;
    // 0x179430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179660u, 0x17942Cu, 0x179434u)) {
        return;
    }
    ctx->pc = 0x179434u;
label_179434:
    // 0x179434: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x179434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_179438:
    // 0x179438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17943c:
    // 0x17943c: 0xc097b28  jal         func_25ECA0
label_179440:
    if (ctx->pc == 0x179440u) {
        ctx->pc = 0x179440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17943Cu;
        // 0x179440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179444u;
        goto label_179444;
    }
    ctx->pc = 0x17943Cu;
    SET_GPR_U32(ctx, 31, 0x179444u);
    ctx->pc = 0x179440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17943Cu;
    // 0x179440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x17943Cu, 0x179444u)) {
        return;
    }
    ctx->pc = 0x179444u;
label_179444:
    // 0x179444: 0x922700fa  lbu         $a3, 0xFA($s1)
    ctx->pc = 0x179444u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 250)));
label_179448:
    // 0x179448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17944c:
    // 0x17944c: 0x922600f9  lbu         $a2, 0xF9($s1)
    ctx->pc = 0x17944cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 249)));
label_179450:
    // 0x179450: 0xc05811a  jal         func_160468
label_179454:
    if (ctx->pc == 0x179454u) {
        ctx->pc = 0x179454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179450u;
        // 0x179454: 0x922500f8  lbu         $a1, 0xF8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179458u;
        goto label_179458;
    }
    ctx->pc = 0x179450u;
    SET_GPR_U32(ctx, 31, 0x179458u);
    ctx->pc = 0x179454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179450u;
    // 0x179454: 0x922500f8  lbu         $a1, 0xF8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x160468u, 0x179450u, 0x179458u)) {
        return;
    }
    ctx->pc = 0x179458u;
label_179458:
    // 0x179458: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17945c:
    // 0x17945c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_179460:
    // 0x179460: 0x40f809  jalr        $v0
label_179464:
    if (ctx->pc == 0x179464u) {
        ctx->pc = 0x179464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179460u;
        // 0x179464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179468u;
        goto label_179468;
    }
    ctx->pc = 0x179460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179468u);
        ctx->pc = 0x179464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179460u;
        // 0x179464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179460u, 0x179468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179468u;
label_179468:
    // 0x179468: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17946c:
    // 0x17946c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x17946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_179470:
    // 0x179470: 0x40f809  jalr        $v0
label_179474:
    if (ctx->pc == 0x179474u) {
        ctx->pc = 0x179474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179470u;
        // 0x179474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179478u;
        goto label_179478;
    }
    ctx->pc = 0x179470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179478u);
        ctx->pc = 0x179474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179470u;
        // 0x179474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179470u, 0x179478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179478u;
label_179478:
    // 0x179478: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17947c:
    // 0x17947c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_179480:
    // 0x179480: 0x40f809  jalr        $v0
label_179484:
    if (ctx->pc == 0x179484u) {
        ctx->pc = 0x179484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179480u;
        // 0x179484: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179488u;
        goto label_179488;
    }
    ctx->pc = 0x179480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179488u);
        ctx->pc = 0x179484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179480u;
        // 0x179484: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179480u, 0x179488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179488u;
label_179488:
    // 0x179488: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17948c:
    // 0x17948c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x17948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_179490:
    // 0x179490: 0x40f809  jalr        $v0
label_179494:
    if (ctx->pc == 0x179494u) {
        ctx->pc = 0x179494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179490u;
        // 0x179494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179498u;
        goto label_179498;
    }
    ctx->pc = 0x179490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179498u);
        ctx->pc = 0x179494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179490u;
        // 0x179494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179490u, 0x179498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179498u;
label_179498:
    // 0x179498: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x179498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17949c:
    // 0x17949c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1794a0:
    // 0x1794a0: 0xc097b28  jal         func_25ECA0
label_1794a4:
    if (ctx->pc == 0x1794A4u) {
        ctx->pc = 0x1794A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794A0u;
        // 0x1794a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794A8u;
        goto label_1794a8;
    }
    ctx->pc = 0x1794A0u;
    SET_GPR_U32(ctx, 31, 0x1794A8u);
    ctx->pc = 0x1794A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794A0u;
    // 0x1794a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ECA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25ECA0u, 0x1794A0u, 0x1794A8u)) {
        return;
    }
    ctx->pc = 0x1794A8u;
label_1794a8:
    // 0x1794a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1794a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1794ac:
    // 0x1794ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1794acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1794b0:
    // 0x1794b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1794b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1794b4:
    // 0x1794b4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1794b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1794b8:
    // 0x1794b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1794b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1794bc:
    // 0x1794bc: 0x3e00008  jr          $ra
label_1794c0:
    if (ctx->pc == 0x1794C0u) {
        ctx->pc = 0x1794C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794BCu;
        // 0x1794c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794C4u;
        goto label_1794c4;
    }
    ctx->pc = 0x1794BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1794C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794BCu;
        // 0x1794c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1794BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1794C4u;
label_1794c4:
    // 0x1794c4: 0x0  nop
    ctx->pc = 0x1794c4u;
    // NOP
    ctx->pc = 0x1794c8u;
}
