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

// Function: sub_001B91B8
// Address: 0x1b91b8 - 0x1b9280
void sub_001B91B8_0x1b91b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B91B8_0x1b91b8");
#endif

    switch (ctx->pc) {
        case 0x1b91b8u: goto label_1b91b8;
        case 0x1b91bcu: goto label_1b91bc;
        case 0x1b91c0u: goto label_1b91c0;
        case 0x1b91c4u: goto label_1b91c4;
        case 0x1b91c8u: goto label_1b91c8;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91d0u: goto label_1b91d0;
        case 0x1b91d4u: goto label_1b91d4;
        case 0x1b91d8u: goto label_1b91d8;
        case 0x1b91dcu: goto label_1b91dc;
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b91e4u: goto label_1b91e4;
        case 0x1b91e8u: goto label_1b91e8;
        case 0x1b91ecu: goto label_1b91ec;
        case 0x1b91f0u: goto label_1b91f0;
        case 0x1b91f4u: goto label_1b91f4;
        case 0x1b91f8u: goto label_1b91f8;
        case 0x1b91fcu: goto label_1b91fc;
        case 0x1b9200u: goto label_1b9200;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9208u: goto label_1b9208;
        case 0x1b920cu: goto label_1b920c;
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9214u: goto label_1b9214;
        case 0x1b9218u: goto label_1b9218;
        case 0x1b921cu: goto label_1b921c;
        case 0x1b9220u: goto label_1b9220;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b9228u: goto label_1b9228;
        case 0x1b922cu: goto label_1b922c;
        case 0x1b9230u: goto label_1b9230;
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b923cu: goto label_1b923c;
        case 0x1b9240u: goto label_1b9240;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b924cu: goto label_1b924c;
        case 0x1b9250u: goto label_1b9250;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b9258u: goto label_1b9258;
        case 0x1b925cu: goto label_1b925c;
        case 0x1b9260u: goto label_1b9260;
        case 0x1b9264u: goto label_1b9264;
        case 0x1b9268u: goto label_1b9268;
        case 0x1b926cu: goto label_1b926c;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9274u: goto label_1b9274;
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        default: break;
    }

    ctx->pc = 0x1b91b8u;

label_1b91b8:
    // 0x1b91b8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b91b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1b91bc:
    // 0x1b91bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b91bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b91c0:
    // 0x1b91c0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1b91c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1b91c4:
    // 0x1b91c4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b91c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b91c8:
    // 0x1b91c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b91c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b91cc:
    // 0x1b91cc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1b91ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1b91d0:
    // 0x1b91d0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1b91d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1b91d4:
    // 0x1b91d4: 0xc0c493d  jal         func_3124F4
label_1b91d8:
    if (ctx->pc == 0x1B91D8u) {
        ctx->pc = 0x1B91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91D4u;
        // 0x1b91d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91DCu;
        goto label_1b91dc;
    }
    ctx->pc = 0x1B91D4u;
    SET_GPR_U32(ctx, 31, 0x1B91DCu);
    ctx->pc = 0x1B91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91D4u;
    // 0x1b91d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B91D4u, 0x1B91DCu)) {
        return;
    }
    ctx->pc = 0x1B91DCu;
label_1b91dc:
    // 0x1b91dc: 0x8e270264  lw          $a3, 0x264($s1)
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1b91e0:
    // 0x1b91e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1b91e4:
    // 0x1b91e4: 0x8e2602a8  lw          $a2, 0x2A8($s1)
    ctx->pc = 0x1b91e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_1b91e8:
    // 0x1b91e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b91ec:
    // 0x1b91ec: 0xc0c4fc4  jal         func_313F10
label_1b91f0:
    if (ctx->pc == 0x1B91F0u) {
        ctx->pc = 0x1B91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91ECu;
        // 0x1b91f0: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91F4u;
        goto label_1b91f4;
    }
    ctx->pc = 0x1B91ECu;
    SET_GPR_U32(ctx, 31, 0x1B91F4u);
    ctx->pc = 0x1B91F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91ECu;
    // 0x1b91f0: 0x24a5ce30  addiu       $a1, $a1, -0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B91ECu, 0x1B91F4u)) {
        return;
    }
    ctx->pc = 0x1B91F4u;
label_1b91f4:
    // 0x1b91f4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b91f8:
    // 0x1b91f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b91f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b91fc:
    // 0x1b91fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b91fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9200:
    // 0x1b9200: 0xc0c493d  jal         func_3124F4
label_1b9204:
    if (ctx->pc == 0x1B9204u) {
        ctx->pc = 0x1B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9200u;
        // 0x1b9204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9208u;
        goto label_1b9208;
    }
    ctx->pc = 0x1B9200u;
    SET_GPR_U32(ctx, 31, 0x1B9208u);
    ctx->pc = 0x1B9204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9200u;
    // 0x1b9204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B9200u, 0x1B9208u)) {
        return;
    }
    ctx->pc = 0x1B9208u;
label_1b9208:
    // 0x1b9208: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1b9208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_1b920c:
    // 0x1b920c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9210:
    // 0x1b9210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b9214:
    // 0x1b9214: 0x24c6ce38  addiu       $a2, $a2, -0x31C8
    ctx->pc = 0x1b9214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954552));
label_1b9218:
    // 0x1b9218: 0xc07cc10  jal         func_1F3040
label_1b921c:
    if (ctx->pc == 0x1B921Cu) {
        ctx->pc = 0x1B921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9218u;
        // 0x1b921c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9220u;
        goto label_1b9220;
    }
    ctx->pc = 0x1B9218u;
    SET_GPR_U32(ctx, 31, 0x1B9220u);
    ctx->pc = 0x1B921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9218u;
    // 0x1b921c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x1B9218u, 0x1B9220u)) {
        return;
    }
    ctx->pc = 0x1B9220u;
label_1b9220:
    // 0x1b9220: 0x8e2402a4  lw          $a0, 0x2A4($s1)
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1b9224:
    // 0x1b9224: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b9228:
    if (ctx->pc == 0x1B9228u) {
        ctx->pc = 0x1B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9224u;
        // 0x1b9228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B922Cu;
        goto label_1b922c;
    }
    ctx->pc = 0x1B9224u;
    {
        const bool branch_taken_0x1b9224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9224u;
        // 0x1b9228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9224) {
            ctx->pc = 0x1B9238u;
            goto label_1b9238;
        }
    }
    ctx->pc = 0x1B922Cu;
label_1b922c:
    // 0x1b922c: 0xc08a0e2  jal         func_228388
label_1b9230:
    if (ctx->pc == 0x1B9230u) {
        ctx->pc = 0x1B9234u;
        goto label_1b9234;
    }
    ctx->pc = 0x1B922Cu;
    SET_GPR_U32(ctx, 31, 0x1B9234u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1B922Cu, 0x1B9234u)) {
        return;
    }
    ctx->pc = 0x1B9234u;
label_1b9234:
    // 0x1b9234: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x1b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
label_1b9238:
    // 0x1b9238: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_1b923c:
    if (ctx->pc == 0x1B923Cu) {
        ctx->pc = 0x1B923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9238u;
        // 0x1b923c: 0x8e260270  lw          $a2, 0x270($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9240u;
        goto label_1b9240;
    }
    ctx->pc = 0x1B9238u;
    {
        const bool branch_taken_0x1b9238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9238) {
            ctx->pc = 0x1B923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9238u;
            // 0x1b923c: 0x8e260270  lw          $a2, 0x270($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9254u;
            goto label_1b9254;
        }
    }
    ctx->pc = 0x1B9240u;
label_1b9240:
    // 0x1b9240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9244:
    // 0x1b9244: 0xc06d0e4  jal         func_1B4390
label_1b9248:
    if (ctx->pc == 0x1B9248u) {
        ctx->pc = 0x1B9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9244u;
        // 0x1b9248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B924Cu;
        goto label_1b924c;
    }
    ctx->pc = 0x1B9244u;
    SET_GPR_U32(ctx, 31, 0x1B924Cu);
    ctx->pc = 0x1B9248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9244u;
    // 0x1b9248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4390u, 0x1B9244u, 0x1B924Cu)) {
        return;
    }
    ctx->pc = 0x1B924Cu;
label_1b924c:
    // 0x1b924c: 0xae2202a4  sw          $v0, 0x2A4($s1)
    ctx->pc = 0x1b924cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 2));
label_1b9250:
    // 0x1b9250: 0x8e260270  lw          $a2, 0x270($s1)
    ctx->pc = 0x1b9250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1b9254:
    // 0x1b9254: 0x8e2502a4  lw          $a1, 0x2A4($s1)
    ctx->pc = 0x1b9254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_1b9258:
    // 0x1b9258: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b9258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b925c:
    // 0x1b925c: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1b925cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1b9260:
    // 0x1b9260: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1b9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1b9264:
    // 0x1b9264: 0x60f809  jalr        $v1
label_1b9268:
    if (ctx->pc == 0x1B9268u) {
        ctx->pc = 0x1B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9264u;
        // 0x1b9268: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B926Cu;
        goto label_1b926c;
    }
    ctx->pc = 0x1B9264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B926Cu);
        ctx->pc = 0x1B9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9264u;
        // 0x1b9268: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9264u, 0x1B926Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B926Cu;
label_1b926c:
    // 0x1b926c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1b926cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1b9270:
    // 0x1b9270: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1b9270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1b9274:
    // 0x1b9274: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1b9274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1b9278:
    // 0x1b9278: 0x3e00008  jr          $ra
label_1b927c:
    if (ctx->pc == 0x1B927Cu) {
        ctx->pc = 0x1B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9278u;
        // 0x1b927c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9280u;
        goto label_fallthrough_0x1b9278;
    }
    ctx->pc = 0x1B9278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9278u;
        // 0x1b927c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9278:
    ctx->pc = 0x1B9280u;
}
