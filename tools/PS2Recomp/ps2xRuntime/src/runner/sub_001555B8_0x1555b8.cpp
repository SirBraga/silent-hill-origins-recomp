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

// Function: sub_001555B8
// Address: 0x1555b8 - 0x155830
void sub_001555B8_0x1555b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001555B8_0x1555b8");
#endif

    switch (ctx->pc) {
        case 0x1555f4u: goto label_1555f4;
        case 0x155610u: goto label_155610;
        case 0x155644u: goto label_155644;
        case 0x155674u: goto label_155674;
        case 0x155684u: goto label_155684;
        case 0x15568cu: goto label_15568c;
        case 0x1556f4u: goto label_1556f4;
        case 0x155708u: goto label_155708;
        case 0x155744u: goto label_155744;
        case 0x155774u: goto label_155774;
        case 0x155784u: goto label_155784;
        case 0x15578cu: goto label_15578c;
        default: break;
    }

    ctx->pc = 0x1555b8u;

    // 0x1555b8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1555b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1555bc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1555bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1555c0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1555c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1555c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1555c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555c8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1555c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1555cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1555ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555d0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1555d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1555d4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1555d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1555d8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1555d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1555dc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1555dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1555e0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1555e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1555e4: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1555E4u;
    {
        const bool branch_taken_0x1555e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555E4u;
        // 0x1555e8: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555e4) {
            ctx->pc = 0x1556E8u;
            goto label_1556e8;
        }
    }
    ctx->pc = 0x1555ECu;
    // 0x1555ec: 0xc055490  jal         func_155240
    ctx->pc = 0x1555ECu;
    SET_GPR_U32(ctx, 31, 0x1555F4u);
    ctx->pc = 0x1555F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555ECu;
    // 0x1555f0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155240u, 0x1555ECu, 0x1555F4u)) {
        return;
    }
    ctx->pc = 0x1555F4u;
label_1555f4:
    // 0x1555f4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1555f8: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x1555F8u;
    {
        const bool branch_taken_0x1555f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555F8u;
        // 0x1555fc: 0x26330094  addiu       $s3, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555f8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x155600u;
    // 0x155600: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x155600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x155604: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x155604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x155608: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15560c: 0x0  nop
    ctx->pc = 0x15560cu;
    // NOP
label_155610:
    // 0x155610: 0x5602002d  bnel        $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x155610u;
    {
        const bool branch_taken_0x155610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x155610) {
            ctx->pc = 0x155614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155610u;
            // 0x155614: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1556C8u;
            goto label_1556c8;
        }
    }
    ctx->pc = 0x155618u;
    // 0x155618: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x15561c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x15561cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155620: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155628: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x15562c: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x155630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155630u;
    {
        const bool branch_taken_0x155630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155630u;
        // 0x155634: 0x2634004c  addiu       $s4, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155630) {
            ctx->pc = 0x155640u;
            goto label_155640;
        }
    }
    ctx->pc = 0x155638u;
    // 0x155638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155638u;
    {
        const bool branch_taken_0x155638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155638u;
        // 0x15563c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155638) {
            ctx->pc = 0x155664u;
            goto label_155664;
        }
    }
    ctx->pc = 0x155640u;
label_155640:
    // 0x155640: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_155644:
    // 0x155644: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x155644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x155648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155648u;
    {
        const bool branch_taken_0x155648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155648u;
        // 0x15564c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155648) {
            ctx->pc = 0x155664u;
            goto label_155664;
        }
    }
    ctx->pc = 0x155650u;
    // 0x155650: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x155654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155658: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x155658u;
    {
        const bool branch_taken_0x155658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155658) {
            ctx->pc = 0x15565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155658u;
            // 0x15565c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155644;
        }
    }
    ctx->pc = 0x155660u;
    // 0x155660: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x155660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155664:
    // 0x155664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15566c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15566Cu;
    SET_GPR_U32(ctx, 31, 0x155674u);
    ctx->pc = 0x155670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15566Cu;
    // 0x155670: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15566Cu, 0x155674u)) {
        return;
    }
    ctx->pc = 0x155674u;
label_155674:
    // 0x155674: 0x26c52938  addiu       $a1, $s6, 0x2938
    ctx->pc = 0x155674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 10552));
    // 0x155678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15567c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x15567Cu;
    SET_GPR_U32(ctx, 31, 0x155684u);
    ctx->pc = 0x155680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15567Cu;
    // 0x155680: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x15567Cu, 0x155684u)) {
        return;
    }
    ctx->pc = 0x155684u;
label_155684:
    // 0x155684: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x155684u;
    SET_GPR_U32(ctx, 31, 0x15568Cu);
    ctx->pc = 0x155688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155684u;
    // 0x155688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x155684u, 0x15568Cu)) {
        return;
    }
    ctx->pc = 0x15568Cu;
label_15568c:
    // 0x15568c: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x15568cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x155690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155694: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x155698: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x155698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15569c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1556a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1556a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1556a4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1556a8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1556A8u;
    {
        const bool branch_taken_0x1556a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1556ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556A8u;
        // 0x1556ac: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556a8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1556B0u;
    // 0x1556b0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1556b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1556b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1556b8: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1556B8u;
    {
        const bool branch_taken_0x1556b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1556b8) {
            ctx->pc = 0x1556BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1556B8u;
            // 0x1556bc: 0xe6740000  swc1        $f20, 0x0($s3) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1556C0u;
    // 0x1556c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1556C0u;
    {
        const bool branch_taken_0x1556c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556c0) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x1556C8u;
label_1556c8:
    // 0x1556c8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1556cc: 0x10c0004c  beqz        $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1556CCu;
    {
        const bool branch_taken_0x1556cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556CCu;
        // 0x1556d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556cc) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1556D4u;
    // 0x1556d4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1556d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1556d8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1556D8u;
    {
        const bool branch_taken_0x1556d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1556DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556D8u;
        // 0x1556dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556d8) {
            ctx->pc = 0x155610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155610;
        }
    }
    ctx->pc = 0x1556E0u;
    // 0x1556e0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1556E0u;
    {
        const bool branch_taken_0x1556e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556E0u;
        // 0x1556e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556e0) {
            ctx->pc = 0x155804u;
            goto label_155804;
        }
    }
    ctx->pc = 0x1556E8u;
label_1556e8:
    // 0x1556e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1556e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556ec: 0xc055490  jal         func_155240
    ctx->pc = 0x1556ECu;
    SET_GPR_U32(ctx, 31, 0x1556F4u);
    ctx->pc = 0x1556F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556ECu;
    // 0x1556f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155240u, 0x1556ECu, 0x1556F4u)) {
        return;
    }
    ctx->pc = 0x1556F4u;
label_1556f4:
    // 0x1556f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1556f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556f8: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1556F8u;
    {
        const bool branch_taken_0x1556f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556F8u;
        // 0x1556fc: 0x2633008c  addiu       $s3, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556f8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x155700u;
    // 0x155700: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x155704: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x155704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_155708:
    // 0x155708: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x155708u;
    {
        const bool branch_taken_0x155708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155708u;
        // 0x15570c: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155708) {
            ctx->pc = 0x1557ECu;
            goto label_1557ec;
        }
    }
    ctx->pc = 0x155710u;
    // 0x155710: 0x10c0003b  beqz        $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155710) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x155718u;
    // 0x155718: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x15571c: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x15571cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x155720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155724: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x155728: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x155728u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x15572c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15572Cu;
    {
        const bool branch_taken_0x15572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15572Cu;
        // 0x155730: 0x2634004c  addiu       $s4, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15572c) {
            ctx->pc = 0x155740u;
            goto label_155740;
        }
    }
    ctx->pc = 0x155734u;
    // 0x155734: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x155734u;
    {
        const bool branch_taken_0x155734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155734u;
        // 0x155738: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155734) {
            ctx->pc = 0x155764u;
            goto label_155764;
        }
    }
    ctx->pc = 0x15573Cu;
    // 0x15573c: 0x0  nop
    ctx->pc = 0x15573cu;
    // NOP
label_155740:
    // 0x155740: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_155744:
    // 0x155744: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x155744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x155748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155748u;
    {
        const bool branch_taken_0x155748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155748u;
        // 0x15574c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155748) {
            ctx->pc = 0x155764u;
            goto label_155764;
        }
    }
    ctx->pc = 0x155750u;
    // 0x155750: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x155754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155758: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x155758u;
    {
        const bool branch_taken_0x155758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155758) {
            ctx->pc = 0x15575Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155758u;
            // 0x15575c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155744;
        }
    }
    ctx->pc = 0x155760u;
    // 0x155760: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x155760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155764:
    // 0x155764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15576c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15576Cu;
    SET_GPR_U32(ctx, 31, 0x155774u);
    ctx->pc = 0x155770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15576Cu;
    // 0x155770: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15576Cu, 0x155774u)) {
        return;
    }
    ctx->pc = 0x155774u;
label_155774:
    // 0x155774: 0x26c52938  addiu       $a1, $s6, 0x2938
    ctx->pc = 0x155774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 10552));
    // 0x155778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x155778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15577c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x15577Cu;
    SET_GPR_U32(ctx, 31, 0x155784u);
    ctx->pc = 0x155780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15577Cu;
    // 0x155780: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x15577Cu, 0x155784u)) {
        return;
    }
    ctx->pc = 0x155784u;
label_155784:
    // 0x155784: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x155784u;
    SET_GPR_U32(ctx, 31, 0x15578Cu);
    ctx->pc = 0x155788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155784u;
    // 0x155788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x155784u, 0x15578Cu)) {
        return;
    }
    ctx->pc = 0x15578Cu;
label_15578c:
    // 0x15578c: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x15578cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x155790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155794: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x155798: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x155798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15579c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1557a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1557a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1557a4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1557a8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1557A8u;
    {
        const bool branch_taken_0x1557a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1557ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557A8u;
        // 0x1557ac: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557a8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557B0u;
    // 0x1557b0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1557b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1557b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1557b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x1557C0u;
    // 0x1557c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1557C0u;
    {
        const bool branch_taken_0x1557c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557C0u;
        // 0x1557c4: 0xe6740000  swc1        $f20, 0x0($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557c0) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557C8u;
label_1557c8:
    // 0x1557c8: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x1557c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1557cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1557ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1557d0: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1557d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1557d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1557d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1557d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1557d8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1557dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1557dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1557e0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1557e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1557e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1557E4u;
    {
        const bool branch_taken_0x1557e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557E4u;
        // 0x1557e8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e4) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557ECu;
label_1557ec:
    // 0x1557ec: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x1557ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1557f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1557F0u;
    {
        const bool branch_taken_0x1557f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557F0u;
        // 0x1557f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557f0) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557F8u;
    // 0x1557f8: 0x601ffc3  bgez        $s0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1557F8u;
    {
        const bool branch_taken_0x1557f8 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x1557f8) {
            ctx->pc = 0x155708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155708;
        }
    }
    ctx->pc = 0x155800u;
label_155800:
    // 0x155800: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x155800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155804:
    // 0x155804: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x155804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x155808: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x155808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15580c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x15580cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x155810: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x155810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x155814: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x155814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155818: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x155818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15581c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x15581cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155820: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x155820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155824: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x155824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155828: 0x3e00008  jr          $ra
    ctx->pc = 0x155828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155828u;
        // 0x15582c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155830u;
}
