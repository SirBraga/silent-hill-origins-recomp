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

// Function: sub_002293C8
// Address: 0x2293c8 - 0x2294c0
void sub_002293C8_0x2293c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002293C8_0x2293c8");
#endif

    switch (ctx->pc) {
        case 0x2293c8u: goto label_2293c8;
        case 0x2293ccu: goto label_2293cc;
        case 0x2293d0u: goto label_2293d0;
        case 0x2293d4u: goto label_2293d4;
        case 0x2293d8u: goto label_2293d8;
        case 0x2293dcu: goto label_2293dc;
        case 0x2293e0u: goto label_2293e0;
        case 0x2293e4u: goto label_2293e4;
        case 0x2293e8u: goto label_2293e8;
        case 0x2293ecu: goto label_2293ec;
        case 0x2293f0u: goto label_2293f0;
        case 0x2293f4u: goto label_2293f4;
        case 0x2293f8u: goto label_2293f8;
        case 0x2293fcu: goto label_2293fc;
        case 0x229400u: goto label_229400;
        case 0x229404u: goto label_229404;
        case 0x229408u: goto label_229408;
        case 0x22940cu: goto label_22940c;
        case 0x229410u: goto label_229410;
        case 0x229414u: goto label_229414;
        case 0x229418u: goto label_229418;
        case 0x22941cu: goto label_22941c;
        case 0x229420u: goto label_229420;
        case 0x229424u: goto label_229424;
        case 0x229428u: goto label_229428;
        case 0x22942cu: goto label_22942c;
        case 0x229430u: goto label_229430;
        case 0x229434u: goto label_229434;
        case 0x229438u: goto label_229438;
        case 0x22943cu: goto label_22943c;
        case 0x229440u: goto label_229440;
        case 0x229444u: goto label_229444;
        case 0x229448u: goto label_229448;
        case 0x22944cu: goto label_22944c;
        case 0x229450u: goto label_229450;
        case 0x229454u: goto label_229454;
        case 0x229458u: goto label_229458;
        case 0x22945cu: goto label_22945c;
        case 0x229460u: goto label_229460;
        case 0x229464u: goto label_229464;
        case 0x229468u: goto label_229468;
        case 0x22946cu: goto label_22946c;
        case 0x229470u: goto label_229470;
        case 0x229474u: goto label_229474;
        case 0x229478u: goto label_229478;
        case 0x22947cu: goto label_22947c;
        case 0x229480u: goto label_229480;
        case 0x229484u: goto label_229484;
        case 0x229488u: goto label_229488;
        case 0x22948cu: goto label_22948c;
        case 0x229490u: goto label_229490;
        case 0x229494u: goto label_229494;
        case 0x229498u: goto label_229498;
        case 0x22949cu: goto label_22949c;
        case 0x2294a0u: goto label_2294a0;
        case 0x2294a4u: goto label_2294a4;
        case 0x2294a8u: goto label_2294a8;
        case 0x2294acu: goto label_2294ac;
        case 0x2294b0u: goto label_2294b0;
        case 0x2294b4u: goto label_2294b4;
        case 0x2294b8u: goto label_2294b8;
        case 0x2294bcu: goto label_2294bc;
        default: break;
    }

    ctx->pc = 0x2293c8u;

label_2293c8:
    // 0x2293c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2293c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2293cc:
    // 0x2293cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2293ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2293d0:
    // 0x2293d0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2293d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2293d4:
    // 0x2293d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2293d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2293d8:
    // 0x2293d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2293d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2293dc:
    // 0x2293dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2293dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2293e0:
    // 0x2293e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2293e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2293e4:
    // 0x2293e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2293e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2293e8:
    // 0x2293e8: 0x92330003  lbu         $s3, 0x3($s1)
    ctx->pc = 0x2293e8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2293ec:
    // 0x2293ec: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2293ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2293f0:
    // 0x2293f0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2293f4:
    if (ctx->pc == 0x2293F4u) {
        ctx->pc = 0x2293F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F0u;
        // 0x2293f4: 0x32740004  andi        $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2293F8u;
        goto label_2293f8;
    }
    ctx->pc = 0x2293F0u;
    {
        const bool branch_taken_0x2293f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F0u;
        // 0x2293f4: 0x32740004  andi        $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293f0) {
            ctx->pc = 0x229464u;
            goto label_229464;
        }
    }
    ctx->pc = 0x2293F8u;
label_2293f8:
    // 0x2293f8: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
label_2293fc:
    if (ctx->pc == 0x2293FCu) {
        ctx->pc = 0x2293FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F8u;
        // 0x2293fc: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229400u;
        goto label_229400;
    }
    ctx->pc = 0x2293F8u;
    {
        const bool branch_taken_0x2293f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2293f8) {
            ctx->pc = 0x2293FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2293F8u;
            // 0x2293fc: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229424u;
            goto label_229424;
        }
    }
    ctx->pc = 0x229400u;
label_229400:
    // 0x229400: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x229400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_229404:
    // 0x229404: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x229404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_229408:
    // 0x229408: 0x7a240030  lq          $a0, 0x30($s1)
    ctx->pc = 0x229408u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_22940c:
    // 0x22940c: 0x7a250040  lq          $a1, 0x40($s1)
    ctx->pc = 0x22940cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_229410:
    // 0x229410: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x229410u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
label_229414:
    // 0x229414: 0x7e230060  sq          $v1, 0x60($s1)
    ctx->pc = 0x229414u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 3));
label_229418:
    // 0x229418: 0x7e240070  sq          $a0, 0x70($s1)
    ctx->pc = 0x229418u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 4));
label_22941c:
    // 0x22941c: 0x7e250080  sq          $a1, 0x80($s1)
    ctx->pc = 0x22941cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 5));
label_229420:
    // 0x229420: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x229420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_229424:
    // 0x229424: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_229428:
    // 0x229428: 0x10920009  beq         $a0, $s2, . + 4 + (0x9 << 2)
label_22942c:
    if (ctx->pc == 0x22942Cu) {
        ctx->pc = 0x22942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229428u;
        // 0x22942c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229430u;
        goto label_229430;
    }
    ctx->pc = 0x229428u;
    {
        const bool branch_taken_0x229428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x22942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229428u;
        // 0x22942c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229428) {
            ctx->pc = 0x229450u;
            goto label_229450;
        }
    }
    ctx->pc = 0x229430u;
label_229430:
    // 0x229430: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_229434:
    // 0x229434: 0x0  nop
    ctx->pc = 0x229434u;
    // NOP
label_229438:
    // 0x229438: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x229438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22943c:
    // 0x22943c: 0x40f809  jalr        $v0
label_229440:
    if (ctx->pc == 0x229440u) {
        ctx->pc = 0x229444u;
        goto label_229444;
    }
    ctx->pc = 0x22943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229444u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22943Cu, 0x229444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229444u;
label_229444:
    // 0x229444: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229448:
    // 0x229448: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_22944c:
    if (ctx->pc == 0x22944Cu) {
        ctx->pc = 0x22944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229448u;
        // 0x22944c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229450u;
        goto label_229450;
    }
    ctx->pc = 0x229448u;
    {
        const bool branch_taken_0x229448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x22944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229448u;
        // 0x22944c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229448) {
            ctx->pc = 0x229438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229438;
        }
    }
    ctx->pc = 0x229450u;
label_229450:
    // 0x229450: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x229450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_229454:
    // 0x229454: 0xc08a49e  jal         func_229278
label_229458:
    if (ctx->pc == 0x229458u) {
        ctx->pc = 0x229458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229454u;
        // 0x229458: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22945Cu;
        goto label_22945c;
    }
    ctx->pc = 0x229454u;
    SET_GPR_U32(ctx, 31, 0x22945Cu);
    ctx->pc = 0x229458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229454u;
    // 0x229458: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229278u, 0x229454u, 0x22945Cu)) {
        return;
    }
    ctx->pc = 0x22945Cu;
label_22945c:
    // 0x22945c: 0x1000000f  b           . + 4 + (0xF << 2)
label_229460:
    if (ctx->pc == 0x229460u) {
        ctx->pc = 0x229460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22945Cu;
        // 0x229460: 0x326200f0  andi        $v0, $s3, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229464u;
        goto label_229464;
    }
    ctx->pc = 0x22945Cu;
    {
        const bool branch_taken_0x22945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22945Cu;
        // 0x229460: 0x326200f0  andi        $v0, $s3, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22945c) {
            ctx->pc = 0x22949Cu;
            goto label_22949c;
        }
    }
    ctx->pc = 0x229464u;
label_229464:
    // 0x229464: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x229464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_229468:
    // 0x229468: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x229468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_22946c:
    // 0x22946c: 0x10920008  beq         $a0, $s2, . + 4 + (0x8 << 2)
label_229470:
    if (ctx->pc == 0x229470u) {
        ctx->pc = 0x229470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22946Cu;
        // 0x229470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229474u;
        goto label_229474;
    }
    ctx->pc = 0x22946Cu;
    {
        const bool branch_taken_0x22946c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x229470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22946Cu;
        // 0x229470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22946c) {
            ctx->pc = 0x229490u;
            goto label_229490;
        }
    }
    ctx->pc = 0x229474u;
label_229474:
    // 0x229474: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x229474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_229478:
    // 0x229478: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x229478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22947c:
    // 0x22947c: 0x40f809  jalr        $v0
label_229480:
    if (ctx->pc == 0x229480u) {
        ctx->pc = 0x229484u;
        goto label_229484;
    }
    ctx->pc = 0x22947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22947Cu, 0x229484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229484u;
label_229484:
    // 0x229484: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x229484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229488:
    // 0x229488: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_22948c:
    if (ctx->pc == 0x22948Cu) {
        ctx->pc = 0x22948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229488u;
        // 0x22948c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229490u;
        goto label_229490;
    }
    ctx->pc = 0x229488u;
    {
        const bool branch_taken_0x229488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x22948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229488u;
        // 0x22948c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229488) {
            ctx->pc = 0x229478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229478;
        }
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0xc08a4d0  jal         func_229340
label_229494:
    if (ctx->pc == 0x229494u) {
        ctx->pc = 0x229494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229490u;
        // 0x229494: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229498u;
        goto label_229498;
    }
    ctx->pc = 0x229490u;
    SET_GPR_U32(ctx, 31, 0x229498u);
    ctx->pc = 0x229494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229490u;
    // 0x229494: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229340u, 0x229490u, 0x229498u)) {
        return;
    }
    ctx->pc = 0x229498u;
label_229498:
    // 0x229498: 0x326200f0  andi        $v0, $s3, 0xF0
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)240);
label_22949c:
    // 0x22949c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2294a0:
    // 0x2294a0: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x2294a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_2294a4:
    // 0x2294a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2294a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2294a8:
    // 0x2294a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2294a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2294ac:
    // 0x2294ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2294acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2294b0:
    // 0x2294b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2294b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2294b4:
    // 0x2294b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2294b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2294b8:
    // 0x2294b8: 0x3e00008  jr          $ra
label_2294bc:
    if (ctx->pc == 0x2294BCu) {
        ctx->pc = 0x2294BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294B8u;
        // 0x2294bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2294C0u;
        goto label_fallthrough_0x2294b8;
    }
    ctx->pc = 0x2294B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2294BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294B8u;
        // 0x2294bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2294B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2294b8:
    ctx->pc = 0x2294C0u;
}
