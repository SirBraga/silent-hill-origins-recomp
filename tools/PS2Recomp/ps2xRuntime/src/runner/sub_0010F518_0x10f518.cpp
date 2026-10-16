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

// Function: sub_0010F518
// Address: 0x10f518 - 0x10f670
void sub_0010F518_0x10f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F518_0x10f518");
#endif

    switch (ctx->pc) {
        case 0x10f534u: goto label_10f534;
        case 0x10f59cu: goto label_10f59c;
        case 0x10f5b0u: goto label_10f5b0;
        case 0x10f5c0u: goto label_10f5c0;
        case 0x10f5d0u: goto label_10f5d0;
        case 0x10f600u: goto label_10f600;
        case 0x10f618u: goto label_10f618;
        case 0x10f650u: goto label_10f650;
        default: break;
    }

    ctx->pc = 0x10f518u;

    // 0x10f518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10f51c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10f520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10f524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f52c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x10F52Cu;
    SET_GPR_U32(ctx, 31, 0x10F534u);
    ctx->pc = 0x10F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F52Cu;
    // 0x10f530: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x10F52Cu, 0x10F534u)) {
        return;
    }
    ctx->pc = 0x10F534u;
label_10f534:
    // 0x10f534: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10f538: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10f53c: 0x8c434318  lw          $v1, 0x4318($v0)
    ctx->pc = 0x10f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4318u));
    // 0x10f540: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F540u;
    {
        const bool branch_taken_0x10f540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F540u;
        // 0x10f544: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f540) {
            ctx->pc = 0x10F550u;
            goto label_10f550;
        }
    }
    ctx->pc = 0x10F548u;
    // 0x10f548: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x10F548u;
    {
        const bool branch_taken_0x10f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F548u;
        // 0x10f54c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f548) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F550u;
label_10f550:
    // 0x10f550: 0x8c434320  lw          $v1, 0x4320($v0)
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17184)));
    // 0x10f554: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x10F554u;
    {
        const bool branch_taken_0x10f554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F554u;
        // 0x10f558: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f554) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F55Cu;
    // 0x10f55c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x10f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x10f560: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F560u;
    {
        const bool branch_taken_0x10f560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F560u;
        // 0x10f564: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f560) {
            ctx->pc = 0x10F574u;
            goto label_10f574;
        }
    }
    ctx->pc = 0x10F568u;
    // 0x10f568: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x10f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x10f56c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x10F56Cu;
    {
        const bool branch_taken_0x10f56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F56Cu;
        // 0x10f570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f56c) {
            ctx->pc = 0x10F5E4u;
            goto label_10f5e4;
        }
    }
    ctx->pc = 0x10F574u;
label_10f574:
    // 0x10f574: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x10f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x10f578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f57c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F57Cu;
    {
        const bool branch_taken_0x10f57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F57Cu;
        // 0x10f580: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f57c) {
            ctx->pc = 0x10F594u;
            goto label_10f594;
        }
    }
    ctx->pc = 0x10F584u;
    // 0x10f584: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10F584u;
    {
        const bool branch_taken_0x10f584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10f584) {
            ctx->pc = 0x10F5B8u;
            goto label_10f5b8;
        }
    }
    ctx->pc = 0x10F58Cu;
    // 0x10f58c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x10F58Cu;
    {
        const bool branch_taken_0x10f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F58Cu;
        // 0x10f590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f58c) {
            ctx->pc = 0x10F65Cu;
            goto label_10f65c;
        }
    }
    ctx->pc = 0x10F594u;
label_10f594:
    // 0x10f594: 0xc043f3e  jal         func_10FCF8
    ctx->pc = 0x10F594u;
    SET_GPR_U32(ctx, 31, 0x10F59Cu);
    ctx->pc = 0x10F598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F594u;
    // 0x10f598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FCF8u, 0x10F594u, 0x10F59Cu)) {
        return;
    }
    ctx->pc = 0x10F59Cu;
label_10f59c:
    // 0x10f59c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10F59Cu;
    {
        const bool branch_taken_0x10f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F59Cu;
        // 0x10f5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f59c) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F5A4u;
    // 0x10f5a4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x10f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x10f5a8: 0xc043d9c  jal         func_10F670
    ctx->pc = 0x10F5A8u;
    SET_GPR_U32(ctx, 31, 0x10F5B0u);
    ctx->pc = 0x10F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5A8u;
    // 0x10f5ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F670u, 0x10F5A8u, 0x10F5B0u)) {
        return;
    }
    ctx->pc = 0x10F5B0u;
label_10f5b0:
    // 0x10f5b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x10F5B0u;
    {
        const bool branch_taken_0x10f5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5B0u;
        // 0x10f5b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5b0) {
            ctx->pc = 0x10F654u;
            goto label_10f654;
        }
    }
    ctx->pc = 0x10F5B8u;
label_10f5b8:
    // 0x10f5b8: 0xc043f3e  jal         func_10FCF8
    ctx->pc = 0x10F5B8u;
    SET_GPR_U32(ctx, 31, 0x10F5C0u);
    ctx->pc = 0x10F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5B8u;
    // 0x10f5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FCF8u, 0x10F5B8u, 0x10F5C0u)) {
        return;
    }
    ctx->pc = 0x10F5C0u;
label_10f5c0:
    // 0x10f5c0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x10F5C0u;
    {
        const bool branch_taken_0x10f5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f5c0) {
            ctx->pc = 0x10F5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F5C0u;
            // 0x10f5c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F65Cu;
            goto label_10f65c;
        }
    }
    ctx->pc = 0x10F5C8u;
    // 0x10f5c8: 0xc043f24  jal         func_10FC90
    ctx->pc = 0x10F5C8u;
    SET_GPR_U32(ctx, 31, 0x10F5D0u);
    ctx->pc = 0x10F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5C8u;
    // 0x10f5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FC90u, 0x10F5C8u, 0x10F5D0u)) {
        return;
    }
    ctx->pc = 0x10F5D0u;
label_10f5d0:
    // 0x10f5d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10f5d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f5d8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x10f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x10f5dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10F5DCu;
    {
        const bool branch_taken_0x10f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5DCu;
        // 0x10f5e0: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5dc) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F5E4u;
label_10f5e4:
    // 0x10f5e4: 0x8c434370  lw          $v1, 0x4370($v0)
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x10f5e8: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10F5E8u;
    {
        const bool branch_taken_0x10f5e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5E8u;
        // 0x10f5ec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5e8) {
            ctx->pc = 0x10F62Cu;
            goto label_10f62c;
        }
    }
    ctx->pc = 0x10F5F0u;
    // 0x10f5f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10f5f4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10f5f8: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x10F5F8u;
    SET_GPR_U32(ctx, 31, 0x10F600u);
    ctx->pc = 0x10F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5F8u;
    // 0x10f5fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x10F5F8u, 0x10F600u)) {
        return;
    }
    ctx->pc = 0x10F600u;
label_10f600:
    // 0x10f600: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x10F600u;
    {
        const bool branch_taken_0x10f600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f600) {
            ctx->pc = 0x10F604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F600u;
            // 0x10f604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F65Cu;
            goto label_10f65c;
        }
    }
    ctx->pc = 0x10F608u;
    // 0x10f608: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x10f608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x10f60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f610: 0xc043d9c  jal         func_10F670
    ctx->pc = 0x10F610u;
    SET_GPR_U32(ctx, 31, 0x10F618u);
    ctx->pc = 0x10F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F610u;
    // 0x10f614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F670u, 0x10F610u, 0x10F618u)) {
        return;
    }
    ctx->pc = 0x10F618u;
label_10f618:
    // 0x10f618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f61c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10f620: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x10f620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x10f624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10F624u;
    {
        const bool branch_taken_0x10f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F624u;
        // 0x10f628: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f624) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F62Cu;
label_10f62c:
    // 0x10f62c: 0x8c43f8c0  lw          $v1, -0x740($v0)
    ctx->pc = 0x10f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x10f630: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10F630u;
    {
        const bool branch_taken_0x10f630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10f630) {
            ctx->pc = 0x10F634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F630u;
            // 0x10f634: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F65Cu;
            goto label_10f65c;
        }
    }
    ctx->pc = 0x10F638u;
    // 0x10f638: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x10f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x10f63c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F63Cu;
    {
        const bool branch_taken_0x10f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F63Cu;
        // 0x10f640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f63c) {
            ctx->pc = 0x10F658u;
            goto label_10f658;
        }
    }
    ctx->pc = 0x10F644u;
    // 0x10f644: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x10f644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x10f648: 0xc043d9c  jal         func_10F670
    ctx->pc = 0x10F648u;
    SET_GPR_U32(ctx, 31, 0x10F650u);
    ctx->pc = 0x10F64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F648u;
    // 0x10f64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F670u, 0x10F648u, 0x10F650u)) {
        return;
    }
    ctx->pc = 0x10F650u;
label_10f650:
    // 0x10f650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10f650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10f654:
    // 0x10f654: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x10f654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_10f658:
    // 0x10f658: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10f658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10f65c:
    // 0x10f65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f664: 0x3e00008  jr          $ra
    ctx->pc = 0x10F664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F664u;
        // 0x10f668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F66Cu;
    // 0x10f66c: 0x0  nop
    ctx->pc = 0x10f66cu;
    // NOP
    ctx->pc = 0x10f670u;
}
