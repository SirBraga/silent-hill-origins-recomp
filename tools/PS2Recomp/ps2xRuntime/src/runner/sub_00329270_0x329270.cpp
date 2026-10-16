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

// Function: sub_00329270
// Address: 0x329270 - 0x329360
void sub_00329270_0x329270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329270_0x329270");
#endif

    switch (ctx->pc) {
        case 0x329290u: goto label_329290;
        case 0x3292a8u: goto label_3292a8;
        case 0x3292b0u: goto label_3292b0;
        case 0x3292c4u: goto label_3292c4;
        case 0x3292d8u: goto label_3292d8;
        case 0x3292e4u: goto label_3292e4;
        case 0x3292f0u: goto label_3292f0;
        case 0x329304u: goto label_329304;
        case 0x329314u: goto label_329314;
        case 0x32931cu: goto label_32931c;
        case 0x329334u: goto label_329334;
        default: break;
    }

    ctx->pc = 0x329270u;

    // 0x329270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x329274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x329278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x32927c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32927cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329280: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x329280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x329284: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x329284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x329288: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x329288u;
    SET_GPR_U32(ctx, 31, 0x329290u);
    ctx->pc = 0x32928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329288u;
    // 0x32928c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x329288u, 0x329290u)) {
        return;
    }
    ctx->pc = 0x329290u;
label_329290:
    // 0x329290: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x329290u;
    {
        const bool branch_taken_0x329290 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x329294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329290u;
        // 0x329294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329290) {
            ctx->pc = 0x329344u;
            goto label_329344;
        }
    }
    ctx->pc = 0x329298u;
    // 0x329298: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x329298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x32929c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x32929cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3292a0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x3292A0u;
    SET_GPR_U32(ctx, 31, 0x3292A8u);
    ctx->pc = 0x3292A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292A0u;
    // 0x3292a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x3292A0u, 0x3292A8u)) {
        return;
    }
    ctx->pc = 0x3292A8u;
label_3292a8:
    // 0x3292a8: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x3292A8u;
    SET_GPR_U32(ctx, 31, 0x3292B0u);
    ctx->pc = 0x3292ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292A8u;
    // 0x3292ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x3292A8u, 0x3292B0u)) {
        return;
    }
    ctx->pc = 0x3292B0u;
label_3292b0:
    // 0x3292b0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3292b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3292b4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3292B4u;
    {
        const bool branch_taken_0x3292b4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3292B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292B4u;
        // 0x3292b8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292b4) {
            ctx->pc = 0x3292CCu;
            goto label_3292cc;
        }
    }
    ctx->pc = 0x3292BCu;
    // 0x3292bc: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x3292BCu;
    SET_GPR_U32(ctx, 31, 0x3292C4u);
    ctx->pc = 0x3292C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292BCu;
    // 0x3292c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x3292BCu, 0x3292C4u)) {
        return;
    }
    ctx->pc = 0x3292C4u;
label_3292c4:
    // 0x3292c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3292C4u;
    {
        const bool branch_taken_0x3292c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292C4u;
        // 0x3292c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292c4) {
            ctx->pc = 0x3292E8u;
            goto label_3292e8;
        }
    }
    ctx->pc = 0x3292CCu;
label_3292cc:
    // 0x3292cc: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3292ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x3292d0: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x3292D0u;
    SET_GPR_U32(ctx, 31, 0x3292D8u);
    ctx->pc = 0x3292D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292D0u;
    // 0x3292d4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6AA8u, 0x3292D0u, 0x3292D8u)) {
        return;
    }
    ctx->pc = 0x3292D8u;
label_3292d8:
    // 0x3292d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3292d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292dc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x3292DCu;
    SET_GPR_U32(ctx, 31, 0x3292E4u);
    ctx->pc = 0x3292E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292DCu;
    // 0x3292e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x3292DCu, 0x3292E4u)) {
        return;
    }
    ctx->pc = 0x3292E4u;
label_3292e4:
    // 0x3292e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3292e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3292e8:
    // 0x3292e8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x3292E8u;
    SET_GPR_U32(ctx, 31, 0x3292F0u);
    ctx->pc = 0x3292ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292E8u;
    // 0x3292ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x3292E8u, 0x3292F0u)) {
        return;
    }
    ctx->pc = 0x3292F0u;
label_3292f0:
    // 0x3292f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3292f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3292f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3292f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3292fc: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x3292FCu;
    SET_GPR_U32(ctx, 31, 0x329304u);
    ctx->pc = 0x329300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292FCu;
    // 0x329300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x3292FCu, 0x329304u)) {
        return;
    }
    ctx->pc = 0x329304u;
label_329304:
    // 0x329304: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329304u;
    {
        const bool branch_taken_0x329304 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x329308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329304u;
        // 0x329308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329304) {
            ctx->pc = 0x32932Cu;
            goto label_32932c;
        }
    }
    ctx->pc = 0x32930Cu;
    // 0x32930c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x32930Cu;
    SET_GPR_U32(ctx, 31, 0x329314u);
    ctx->pc = 0x329310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32930Cu;
    // 0x329310: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x32930Cu, 0x329314u)) {
        return;
    }
    ctx->pc = 0x329314u;
label_329314:
    // 0x329314: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x329314u;
    SET_GPR_U32(ctx, 31, 0x32931Cu);
    ctx->pc = 0x329318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329314u;
    // 0x329318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x329314u, 0x32931Cu)) {
        return;
    }
    ctx->pc = 0x32931Cu;
label_32931c:
    // 0x32931c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329320: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x329320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x329324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x329324u;
    {
        const bool branch_taken_0x329324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329324u;
        // 0x329328: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329324) {
            ctx->pc = 0x329340u;
            goto label_329340;
        }
    }
    ctx->pc = 0x32932Cu;
label_32932c:
    // 0x32932c: 0xc07df64  jal         func_1F7D90
    ctx->pc = 0x32932Cu;
    SET_GPR_U32(ctx, 31, 0x329334u);
    ctx->pc = 0x329330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32932Cu;
    // 0x329330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7D90u, 0x32932Cu, 0x329334u)) {
        return;
    }
    ctx->pc = 0x329334u;
label_329334:
    // 0x329334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x329334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x329338: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x329338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32933c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x32933cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_329340:
    // 0x329340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x329340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329344:
    // 0x329344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x329344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x329348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32934c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32934cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329354: 0x3e00008  jr          $ra
    ctx->pc = 0x329354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329354u;
        // 0x329358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32935Cu;
    // 0x32935c: 0x0  nop
    ctx->pc = 0x32935cu;
    // NOP
    ctx->pc = 0x329360u;
}
