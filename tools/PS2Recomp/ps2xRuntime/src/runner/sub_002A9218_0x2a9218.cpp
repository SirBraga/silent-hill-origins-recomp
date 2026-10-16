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

// Function: sub_002A9218
// Address: 0x2a9218 - 0x2a9380
void sub_002A9218_0x2a9218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9218_0x2a9218");
#endif

    switch (ctx->pc) {
        case 0x2a9218u: goto label_2a9218;
        case 0x2a921cu: goto label_2a921c;
        case 0x2a9220u: goto label_2a9220;
        case 0x2a9224u: goto label_2a9224;
        case 0x2a9228u: goto label_2a9228;
        case 0x2a922cu: goto label_2a922c;
        case 0x2a9230u: goto label_2a9230;
        case 0x2a9234u: goto label_2a9234;
        case 0x2a9238u: goto label_2a9238;
        case 0x2a923cu: goto label_2a923c;
        case 0x2a9240u: goto label_2a9240;
        case 0x2a9244u: goto label_2a9244;
        case 0x2a9248u: goto label_2a9248;
        case 0x2a924cu: goto label_2a924c;
        case 0x2a9250u: goto label_2a9250;
        case 0x2a9254u: goto label_2a9254;
        case 0x2a9258u: goto label_2a9258;
        case 0x2a925cu: goto label_2a925c;
        case 0x2a9260u: goto label_2a9260;
        case 0x2a9264u: goto label_2a9264;
        case 0x2a9268u: goto label_2a9268;
        case 0x2a926cu: goto label_2a926c;
        case 0x2a9270u: goto label_2a9270;
        case 0x2a9274u: goto label_2a9274;
        case 0x2a9278u: goto label_2a9278;
        case 0x2a927cu: goto label_2a927c;
        case 0x2a9280u: goto label_2a9280;
        case 0x2a9284u: goto label_2a9284;
        case 0x2a9288u: goto label_2a9288;
        case 0x2a928cu: goto label_2a928c;
        case 0x2a9290u: goto label_2a9290;
        case 0x2a9294u: goto label_2a9294;
        case 0x2a9298u: goto label_2a9298;
        case 0x2a929cu: goto label_2a929c;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92a4u: goto label_2a92a4;
        case 0x2a92a8u: goto label_2a92a8;
        case 0x2a92acu: goto label_2a92ac;
        case 0x2a92b0u: goto label_2a92b0;
        case 0x2a92b4u: goto label_2a92b4;
        case 0x2a92b8u: goto label_2a92b8;
        case 0x2a92bcu: goto label_2a92bc;
        case 0x2a92c0u: goto label_2a92c0;
        case 0x2a92c4u: goto label_2a92c4;
        case 0x2a92c8u: goto label_2a92c8;
        case 0x2a92ccu: goto label_2a92cc;
        case 0x2a92d0u: goto label_2a92d0;
        case 0x2a92d4u: goto label_2a92d4;
        case 0x2a92d8u: goto label_2a92d8;
        case 0x2a92dcu: goto label_2a92dc;
        case 0x2a92e0u: goto label_2a92e0;
        case 0x2a92e4u: goto label_2a92e4;
        case 0x2a92e8u: goto label_2a92e8;
        case 0x2a92ecu: goto label_2a92ec;
        case 0x2a92f0u: goto label_2a92f0;
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a92f8u: goto label_2a92f8;
        case 0x2a92fcu: goto label_2a92fc;
        case 0x2a9300u: goto label_2a9300;
        case 0x2a9304u: goto label_2a9304;
        case 0x2a9308u: goto label_2a9308;
        case 0x2a930cu: goto label_2a930c;
        case 0x2a9310u: goto label_2a9310;
        case 0x2a9314u: goto label_2a9314;
        case 0x2a9318u: goto label_2a9318;
        case 0x2a931cu: goto label_2a931c;
        case 0x2a9320u: goto label_2a9320;
        case 0x2a9324u: goto label_2a9324;
        case 0x2a9328u: goto label_2a9328;
        case 0x2a932cu: goto label_2a932c;
        case 0x2a9330u: goto label_2a9330;
        case 0x2a9334u: goto label_2a9334;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a933cu: goto label_2a933c;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9344u: goto label_2a9344;
        case 0x2a9348u: goto label_2a9348;
        case 0x2a934cu: goto label_2a934c;
        case 0x2a9350u: goto label_2a9350;
        case 0x2a9354u: goto label_2a9354;
        case 0x2a9358u: goto label_2a9358;
        case 0x2a935cu: goto label_2a935c;
        case 0x2a9360u: goto label_2a9360;
        case 0x2a9364u: goto label_2a9364;
        case 0x2a9368u: goto label_2a9368;
        case 0x2a936cu: goto label_2a936c;
        case 0x2a9370u: goto label_2a9370;
        case 0x2a9374u: goto label_2a9374;
        case 0x2a9378u: goto label_2a9378;
        case 0x2a937cu: goto label_2a937c;
        default: break;
    }

    ctx->pc = 0x2a9218u;

label_2a9218:
    // 0x2a9218: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a9218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2a921c:
    // 0x2a921c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2a9220:
    // 0x2a9220: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2a9220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2a9224:
    // 0x2a9224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a9224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a9228:
    // 0x2a9228: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2a9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2a922c:
    // 0x2a922c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a922cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9230:
    // 0x2a9230: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a9234:
    // 0x2a9234: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2a9234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2a9238:
    // 0x2a9238: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2a923c:
    // 0x2a923c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2a9240:
    // 0x2a9240: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2a9244:
    if (ctx->pc == 0x2A9244u) {
        ctx->pc = 0x2A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9240u;
        // 0x2a9244: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9248u;
        goto label_2a9248;
    }
    ctx->pc = 0x2A9240u;
    {
        const bool branch_taken_0x2a9240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9240u;
        // 0x2a9244: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9240) {
            ctx->pc = 0x2A9284u;
            goto label_2a9284;
        }
    }
    ctx->pc = 0x2A9248u;
label_2a9248:
    // 0x2a9248: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2a9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2a924c:
    // 0x2a924c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2a9250:
    // 0x2a9250: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a9254:
    // 0x2a9254: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2a9258:
    if (ctx->pc == 0x2A9258u) {
        ctx->pc = 0x2A9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9254u;
        // 0x2a9258: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A925Cu;
        goto label_2a925c;
    }
    ctx->pc = 0x2A9254u;
    {
        const bool branch_taken_0x2a9254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9254) {
            ctx->pc = 0x2A9258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9254u;
            // 0x2a9258: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9284u;
            goto label_2a9284;
        }
    }
    ctx->pc = 0x2A925Cu;
label_2a925c:
    // 0x2a925c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2a9260:
    if (ctx->pc == 0x2A9260u) {
        ctx->pc = 0x2A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A925Cu;
        // 0x2a9260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9264u;
        goto label_2a9264;
    }
    ctx->pc = 0x2A925Cu;
    {
        const bool branch_taken_0x2a925c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A925Cu;
        // 0x2a9260: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a925c) {
            ctx->pc = 0x2A9278u;
            goto label_2a9278;
        }
    }
    ctx->pc = 0x2A9264u;
label_2a9264:
    // 0x2a9264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9268:
    // 0x2a9268: 0xc092d9c  jal         func_24B670
label_2a926c:
    if (ctx->pc == 0x2A926Cu) {
        ctx->pc = 0x2A926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9268u;
        // 0x2a926c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9270u;
        goto label_2a9270;
    }
    ctx->pc = 0x2A9268u;
    SET_GPR_U32(ctx, 31, 0x2A9270u);
    ctx->pc = 0x2A926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9268u;
    // 0x2a926c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2A9268u, 0x2A9270u)) {
        return;
    }
    ctx->pc = 0x2A9270u;
label_2a9270:
    // 0x2a9270: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a9274:
    if (ctx->pc == 0x2A9274u) {
        ctx->pc = 0x2A9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9270u;
        // 0x2a9274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9278u;
        goto label_2a9278;
    }
    ctx->pc = 0x2A9270u;
    {
        const bool branch_taken_0x2a9270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9270u;
        // 0x2a9274: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9270) {
            ctx->pc = 0x2A9280u;
            goto label_2a9280;
        }
    }
    ctx->pc = 0x2A9278u;
label_2a9278:
    // 0x2a9278: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a9278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a927c:
    // 0x2a927c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9280:
    // 0x2a9280: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2a9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2a9284:
    // 0x2a9284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9288:
    // 0x2a9288: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a928c:
    // 0x2a928c: 0x40f809  jalr        $v0
label_2a9290:
    if (ctx->pc == 0x2A9290u) {
        ctx->pc = 0x2A9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A928Cu;
        // 0x2a9290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9294u;
        goto label_2a9294;
    }
    ctx->pc = 0x2A928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9294u);
        ctx->pc = 0x2A9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A928Cu;
        // 0x2a9290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A928Cu, 0x2A9294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9294u;
label_2a9294:
    // 0x2a9294: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_2a9298:
    if (ctx->pc == 0x2A9298u) {
        ctx->pc = 0x2A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9294u;
        // 0x2a9298: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A929Cu;
        goto label_2a929c;
    }
    ctx->pc = 0x2A9294u;
    {
        const bool branch_taken_0x2a9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9294) {
            ctx->pc = 0x2A9298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9294u;
            // 0x2a9298: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9368u;
            goto label_2a9368;
        }
    }
    ctx->pc = 0x2A929Cu;
label_2a929c:
    // 0x2a929c: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
label_2a92a0:
    if (ctx->pc == 0x2A92A0u) {
        ctx->pc = 0x2A92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A929Cu;
        // 0x2a92a0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A92A4u;
        goto label_2a92a4;
    }
    ctx->pc = 0x2A929Cu;
    {
        const bool branch_taken_0x2a929c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a929c) {
            ctx->pc = 0x2A92A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A929Cu;
            // 0x2a92a0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9368u;
            goto label_2a9368;
        }
    }
    ctx->pc = 0x2A92A4u;
label_2a92a4:
    // 0x2a92a4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a92a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a92a8:
    // 0x2a92a8: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x2a92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a92ac:
    // 0x2a92ac: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2a92acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2a92b0:
    // 0x2a92b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a92b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a92b4:
    // 0x2a92b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a92b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2a92b8:
    // 0x2a92b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a92bc:
    // 0x2a92bc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2a92bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_2a92c0:
    // 0x2a92c0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a92c4:
    // 0x2a92c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a92c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a92c8:
    // 0x2a92c8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a92c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_2a92cc:
    // 0x2a92cc: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a92ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_2a92d0:
    // 0x2a92d0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2a92d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2a92d4:
    // 0x2a92d4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a92d8:
    // 0x2a92d8: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x2a92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a92dc:
    // 0x2a92dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2a92dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a92e0:
    // 0x2a92e0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a92e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a92e4:
    // 0x2a92e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a92e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a92e8:
    // 0x2a92e8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2a92e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a92ec:
    // 0x2a92ec: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2a92ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2a92f0:
    // 0x2a92f0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2a92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a92f4:
    // 0x2a92f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a92f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2a92f8:
    // 0x2a92f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a92f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2a92fc:
    // 0x2a92fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a92fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2a9300:
    // 0x2a9300: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2a9300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2a9304:
    // 0x2a9304: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a9304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9308:
    // 0x2a9308: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a9308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a930c:
    // 0x2a930c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a9310:
    // 0x2a9310: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x2a9310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2a9314:
    // 0x2a9314: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2a9314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2a9318:
    // 0x2a9318: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a931c:
    // 0x2a931c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2a931cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2a9320:
    // 0x2a9320: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2a9320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9324:
    // 0x2a9324: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a9324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a9328:
    // 0x2a9328: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2a9328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2a932c:
    // 0x2a932c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2a932cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2a9330:
    // 0x2a9330: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2a9330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2a9334:
    // 0x2a9334: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2a9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9338:
    // 0x2a9338: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a9338u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2a933c:
    // 0x2a933c: 0xe4440000  swc1        $f4, 0x0($v0)
    ctx->pc = 0x2a933cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a9340:
    // 0x2a9340: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2a9340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9344:
    // 0x2a9344: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2a9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9348:
    // 0x2a9348: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a934c:
    // 0x2a934c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a934cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a9350:
    // 0x2a9350: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2a9350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9354:
    // 0x2a9354: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2a9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9358:
    // 0x2a9358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a935c:
    // 0x2a935c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a9360:
    // 0x2a9360: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a9360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9364:
    // 0x2a9364: 0x0  nop
    ctx->pc = 0x2a9364u;
    // NOP
label_2a9368:
    // 0x2a9368: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2a9368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a936c:
    // 0x2a936c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2a936cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a9370:
    // 0x2a9370: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9374:
    // 0x2a9374: 0x3e00008  jr          $ra
label_2a9378:
    if (ctx->pc == 0x2A9378u) {
        ctx->pc = 0x2A9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9374u;
        // 0x2a9378: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A937Cu;
        goto label_2a937c;
    }
    ctx->pc = 0x2A9374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9374u;
        // 0x2a9378: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A937Cu;
label_2a937c:
    // 0x2a937c: 0x0  nop
    ctx->pc = 0x2a937cu;
    // NOP
    ctx->pc = 0x2a9380u;
}
