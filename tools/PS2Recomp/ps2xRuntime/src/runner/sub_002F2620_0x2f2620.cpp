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

// Function: sub_002F2620
// Address: 0x2f2620 - 0x2f2750
void sub_002F2620_0x2f2620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2620_0x2f2620");
#endif

    switch (ctx->pc) {
        case 0x2f267cu: goto label_2f267c;
        case 0x2f26b8u: goto label_2f26b8;
        case 0x2f26d4u: goto label_2f26d4;
        default: break;
    }

    ctx->pc = 0x2f2620u;

    // 0x2f2620: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2624: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f2624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f2628: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2f2628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f262c: 0x24a300ff  addiu       $v1, $a1, 0xFF
    ctx->pc = 0x2f262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x2f2630: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x2f2630u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x2f2634: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2638: 0x39a03  sra         $s3, $v1, 8
    ctx->pc = 0x2f2638u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f263c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2f263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2f2640: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f2644: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x2f2644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x2f2648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f264c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f264cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2654: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2f2654u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2658: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f265c: 0xa29823  subu        $s3, $a1, $v0
    ctx->pc = 0x2f265cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f2660: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f2660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f2664: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f2664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f2668: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f2668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f266c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f2670: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f2670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f2674: 0xc0bc8aa  jal         func_2F22A8
    ctx->pc = 0x2F2674u;
    SET_GPR_U32(ctx, 31, 0x2F267Cu);
    ctx->pc = 0x2F2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2674u;
    // 0x2f2678: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F22A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F22A8u, 0x2F2674u, 0x2F267Cu)) {
        return;
    }
    ctx->pc = 0x2F267Cu;
label_2f267c:
    // 0x2f267c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f267cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2680: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f2684: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F2684u;
    {
        const bool branch_taken_0x2f2684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2684u;
        // 0x2f2688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2684) {
            ctx->pc = 0x2F2720u;
            goto label_2f2720;
        }
    }
    ctx->pc = 0x2F268Cu;
    // 0x2f268c: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2690: 0x3c170072  lui         $s7, 0x72
    ctx->pc = 0x2f2690u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)114 << 16));
    // 0x2f2694: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x2f2694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x2f2698: 0x26f6b748  addiu       $s6, $s7, -0x48B8
    ctx->pc = 0x2f2698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948680));
    // 0x2f269c: 0x26c20800  addiu       $v0, $s6, 0x800
    ctx->pc = 0x2f269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2048));
    // 0x2f26a0: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x2f26a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f26a4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2f26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f26a8: 0x10710012  beq         $v1, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F26A8u;
    {
        const bool branch_taken_0x2f26a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A8u;
        // 0x2f26ac: 0x24040898  addiu       $a0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26a8) {
            ctx->pc = 0x2F26F4u;
            goto label_2f26f4;
        }
    }
    ctx->pc = 0x2F26B0u;
    // 0x2f26b0: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F26B0u;
    SET_GPR_U32(ctx, 31, 0x2F26B8u);
    ctx->pc = 0x2F26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26B0u;
    // 0x2f26b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F26B0u, 0x2F26B8u)) {
        return;
    }
    ctx->pc = 0x2F26B8u;
label_2f26b8:
    // 0x2f26b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F26B8u;
    {
        const bool branch_taken_0x2f26b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26B8u;
        // 0x2f26bc: 0x26c50400  addiu       $a1, $s6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26b8) {
            ctx->pc = 0x2F26DCu;
            goto label_2f26dc;
        }
    }
    ctx->pc = 0x2F26C0u;
    // 0x2f26c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f26c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26c4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2f26c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2f26c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f26c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26cc: 0xc0bd9ec  jal         func_2F67B0
    ctx->pc = 0x2F26CCu;
    SET_GPR_U32(ctx, 31, 0x2F26D4u);
    ctx->pc = 0x2F26D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26CCu;
    // 0x2f26d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67B0u, 0x2F26CCu, 0x2F26D4u)) {
        return;
    }
    ctx->pc = 0x2F26D4u;
label_2f26d4:
    // 0x2f26d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F26D4u;
    {
        const bool branch_taken_0x2f26d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f26d4) {
            ctx->pc = 0x2F26D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F26D4u;
            // 0x2f26d8: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F26F0u;
            goto label_2f26f0;
        }
    }
    ctx->pc = 0x2F26DCu;
label_2f26dc:
    // 0x2f26dc: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f26e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f26e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26e4: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f26e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f26e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F26E8u;
    {
        const bool branch_taken_0x2f26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26E8u;
        // 0x2f26ec: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26e8) {
            ctx->pc = 0x2F2720u;
            goto label_2f2720;
        }
    }
    ctx->pc = 0x2F26F0u;
label_2f26f0:
    // 0x2f26f0: 0x24040898  addiu       $a0, $zero, 0x898
    ctx->pc = 0x2f26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_2f26f4:
    // 0x2f26f4: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2f26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2f26f8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2f26f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f26fc: 0x26e3b748  addiu       $v1, $s7, -0x48B8
    ctx->pc = 0x2f26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948680));
    // 0x2f2700: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f2700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2708: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2f2708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f270c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f2710: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f2714: 0xac7e0400  sw          $fp, 0x400($v1)
    ctx->pc = 0x2f2714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 30));
    // 0x2f2718: 0xac860894  sw          $a2, 0x894($a0)
    ctx->pc = 0x2f2718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 6));
    // 0x2f271c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f271cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2f2720:
    // 0x2f2720: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f2720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2724: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2f2724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2728: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f2728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f272c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f272cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2730: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2734: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2738: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f2738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f273c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f273cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2740: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2748: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2748u;
        // 0x2f274c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2750u;
}
