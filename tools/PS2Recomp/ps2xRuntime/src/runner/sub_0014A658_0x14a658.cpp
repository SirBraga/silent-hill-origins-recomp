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

// Function: sub_0014A658
// Address: 0x14a658 - 0x14a8b0
void sub_0014A658_0x14a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A658_0x14a658");
#endif

    switch (ctx->pc) {
        case 0x14a678u: goto label_14a678;
        case 0x14a6b8u: goto label_14a6b8;
        case 0x14a6f0u: goto label_14a6f0;
        case 0x14a734u: goto label_14a734;
        case 0x14a80cu: goto label_14a80c;
        case 0x14a840u: goto label_14a840;
        case 0x14a87cu: goto label_14a87c;
        case 0x14a898u: goto label_14a898;
        default: break;
    }

    ctx->pc = 0x14a658u;

    // 0x14a658: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14a65c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14a660: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14a664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14a664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a668: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x14a66c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14a66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14a670: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x14A670u;
    SET_GPR_U32(ctx, 31, 0x14A678u);
    ctx->pc = 0x14A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A670u;
    // 0x14a674: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x14A670u, 0x14A678u)) {
        return;
    }
    ctx->pc = 0x14A678u;
label_14a678:
    // 0x14a678: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a67c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a680: 0x8c43eed0  lw          $v1, -0x1130($v0)
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BEED0u));
    // 0x14a684: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x14A684u;
    {
        const bool branch_taken_0x14a684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A684u;
        // 0x14a688: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a684) {
            ctx->pc = 0x14A740u;
            goto label_14a740;
        }
    }
    ctx->pc = 0x14A68Cu;
    // 0x14a68c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14a690: 0xac5184dc  sw          $s1, -0x7B24($v0)
    ctx->pc = 0x14a690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3384DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3384DCu, _value); } while (0);
    // 0x14a694: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x14a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x14a698: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A698u;
    {
        const bool branch_taken_0x14a698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A698u;
        // 0x14a69c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a698) {
            ctx->pc = 0x14A6ACu;
            goto label_14a6ac;
        }
    }
    ctx->pc = 0x14A6A0u;
    // 0x14a6a0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x14a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x14a6a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A6A4u;
    {
        const bool branch_taken_0x14a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6A4u;
        // 0x14a6a8: 0xac4384d8  sw          $v1, -0x7B28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6a4) {
            ctx->pc = 0x14A6B8u;
            goto label_14a6b8;
        }
    }
    ctx->pc = 0x14A6ACu;
label_14a6ac:
    // 0x14a6ac: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x14a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x14a6b0: 0xc04e44e  jal         func_139138
    ctx->pc = 0x14A6B0u;
    SET_GPR_U32(ctx, 31, 0x14A6B8u);
    ctx->pc = 0x14A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6B0u;
    // 0x14a6b4: 0x248484d8  addiu       $a0, $a0, -0x7B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139138u, 0x14A6B0u, 0x14A6B8u)) {
        return;
    }
    ctx->pc = 0x14A6B8u;
label_14a6b8:
    // 0x14a6b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a6bc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14a6c0: 0x8c45eed8  lw          $a1, -0x1128($v0)
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BEED8u));
    // 0x14a6c4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x14a6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6c8: 0x26220044  addiu       $v0, $s1, 0x44
    ctx->pc = 0x14a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x14a6cc: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14a6d0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x14a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14a6d4: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A6D4u;
    {
        const bool branch_taken_0x14a6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x14A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6D4u;
        // 0x14a6d8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6d4) {
            ctx->pc = 0x14A6F0u;
            goto label_14a6f0;
        }
    }
    ctx->pc = 0x14A6DCu;
    // 0x14a6dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a6e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A6E0u;
    {
        const bool branch_taken_0x14a6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6E0u;
        // 0x14a6e4: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6e0) {
            ctx->pc = 0x14A6F4u;
            goto label_14a6f4;
        }
    }
    ctx->pc = 0x14A6E8u;
    // 0x14a6e8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14A6E8u;
    SET_GPR_U32(ctx, 31, 0x14A6F0u);
    ctx->pc = 0x14A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6E8u;
    // 0x14a6ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14A6E8u, 0x14A6F0u)) {
        return;
    }
    ctx->pc = 0x14A6F0u;
label_14a6f0:
    // 0x14a6f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14a6f4:
    // 0x14a6f4: 0x2465eef0  addiu       $a1, $v1, -0x1110
    ctx->pc = 0x14a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x14a6f8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x14a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x14a6fc: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x14A6FCu;
    {
        const bool branch_taken_0x14a6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6FCu;
        // 0x14a700: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6fc) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A704u;
    // 0x14a704: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a708: 0x8e431a70  lw          $v1, 0x1A70($s2)
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6768)));
    // 0x14a70c: 0x8c44eea8  lw          $a0, -0x1158($v0)
    ctx->pc = 0x14a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BEEA8u));
    // 0x14a710: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A710u;
    {
        const bool branch_taken_0x14a710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A710u;
        // 0x14a714: 0x2602eef0  addiu       $v0, $s0, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a710) {
            ctx->pc = 0x14A738u;
            goto label_14a738;
        }
    }
    ctx->pc = 0x14A718u;
    // 0x14a718: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a71c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A71Cu;
    {
        const bool branch_taken_0x14a71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A71Cu;
        // 0x14a720: 0x2602eef0  addiu       $v0, $s0, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a71c) {
            ctx->pc = 0x14A738u;
            goto label_14a738;
        }
    }
    ctx->pc = 0x14A724u;
    // 0x14a724: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a728: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a72c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14A72Cu;
    SET_GPR_U32(ctx, 31, 0x14A734u);
    ctx->pc = 0x14A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A72Cu;
    // 0x14a730: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14A72Cu, 0x14A734u)) {
        return;
    }
    ctx->pc = 0x14A734u;
label_14a734:
    // 0x14a734: 0x2602eef0  addiu       $v0, $s0, -0x1110
    ctx->pc = 0x14a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962928));
label_14a738:
    // 0x14a738: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x14A738u;
    {
        const bool branch_taken_0x14a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A738u;
        // 0x14a73c: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a738) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A740u;
label_14a740:
    // 0x14a740: 0x8c43eea0  lw          $v1, -0x1160($v0)
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962848)));
    // 0x14a744: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x14A744u;
    {
        const bool branch_taken_0x14a744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A744u;
        // 0x14a748: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a744) {
            ctx->pc = 0x14A848u;
            goto label_14a848;
        }
    }
    ctx->pc = 0x14A74Cu;
    // 0x14a74c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14a750: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a758: 0x14640050  bne         $v1, $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14A758u;
    {
        const bool branch_taken_0x14a758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A758u;
        // 0x14a75c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a758) {
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A760u;
    // 0x14a760: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14a764: 0x2464eef0  addiu       $a0, $v1, -0x1110
    ctx->pc = 0x14a764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x14a768: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BEF30u));
    // 0x14a76c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A76Cu;
        // 0x14a770: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A800u;
            goto label_14a800;
        }
    }
    ctx->pc = 0x14A774u;
    // 0x14a774: 0x2467eef0  addiu       $a3, $v1, -0x1110
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x14a778: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x14a778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14a77c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x14a77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14a780: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x14a780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14a784: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x14a784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14a788: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x14a788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14a78c: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x14a78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14a790: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x14a790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a794: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x14a794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a798: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x14a798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a79c: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x14a79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7a0: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x14a7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7a4: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x14a7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7a8: 0x68e2001f  ldl         $v0, 0x1F($a3)
    ctx->pc = 0x14a7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14a7ac: 0x6ce20018  ldr         $v0, 0x18($a3)
    ctx->pc = 0x14a7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14a7b0: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x14a7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14a7b4: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x14a7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14a7b8: 0x68e6002f  ldl         $a2, 0x2F($a3)
    ctx->pc = 0x14a7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14a7bc: 0x6ce60028  ldr         $a2, 0x28($a3)
    ctx->pc = 0x14a7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14a7c0: 0xb3a2003f  sdl         $v0, 0x3F($sp)
    ctx->pc = 0x14a7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7c4: 0xb7a20038  sdr         $v0, 0x38($sp)
    ctx->pc = 0x14a7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7c8: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x14a7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7cc: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x14a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7d0: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x14a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7d4: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x14a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7d8: 0x68e20037  ldl         $v0, 0x37($a3)
    ctx->pc = 0x14a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14a7dc: 0x6ce20030  ldr         $v0, 0x30($a3)
    ctx->pc = 0x14a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14a7e0: 0x68e5003f  ldl         $a1, 0x3F($a3)
    ctx->pc = 0x14a7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14a7e4: 0x6ce50038  ldr         $a1, 0x38($a3)
    ctx->pc = 0x14a7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x14a7e8: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x14a7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7ec: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x14a7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7f0: 0xb3a5005f  sdl         $a1, 0x5F($sp)
    ctx->pc = 0x14a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7f4: 0xb7a50058  sdr         $a1, 0x58($sp)
    ctx->pc = 0x14a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a7f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7F8u;
    {
        const bool branch_taken_0x14a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7F8u;
        // 0x14a7fc: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7f8) {
            ctx->pc = 0x14A80Cu;
            goto label_14a80c;
        }
    }
    ctx->pc = 0x14A800u;
label_14a800:
    // 0x14a800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a804: 0xc04f0fe  jal         func_13C3F8
    ctx->pc = 0x14A804u;
    SET_GPR_U32(ctx, 31, 0x14A80Cu);
    ctx->pc = 0x14A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A804u;
    // 0x14a808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x14A804u, 0x14A80Cu)) {
        return;
    }
    ctx->pc = 0x14A80Cu;
label_14a80c:
    // 0x14a80c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14a810: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x14a810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x14a814: 0x8c45eea8  lw          $a1, -0x1158($v0)
    ctx->pc = 0x14a814u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BEEA8u));
    // 0x14a818: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x14a818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x14a81c: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14A81Cu;
    {
        const bool branch_taken_0x14a81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14a81c) {
            ctx->pc = 0x14A820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A81Cu;
            // 0x14a820: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A824u;
    // 0x14a824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a828: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x14A828u;
    {
        const bool branch_taken_0x14a828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a828) {
            ctx->pc = 0x14A82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A828u;
            // 0x14a82c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A830u;
    // 0x14a830: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x14a830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x14a834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a838: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14A838u;
    SET_GPR_U32(ctx, 31, 0x14A840u);
    ctx->pc = 0x14A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A838u;
    // 0x14a83c: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14A838u, 0x14A840u)) {
        return;
    }
    ctx->pc = 0x14A840u;
label_14a840:
    // 0x14a840: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14A840u;
    {
        const bool branch_taken_0x14a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A840u;
        // 0x14a844: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a840) {
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x8c43eee0  lw          $v1, -0x1120($v0)
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962912)));
    // 0x14a84c: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A84Cu;
    {
        const bool branch_taken_0x14a84c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a84c) {
            ctx->pc = 0x14A850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A84Cu;
            // 0x14a850: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A86Cu;
            goto label_14a86c;
        }
    }
    ctx->pc = 0x14A854u;
    // 0x14a854: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14a854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14a858: 0x8c4384dc  lw          $v1, -0x7B24($v0)
    ctx->pc = 0x14a858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3384DCu));
    // 0x14a85c: 0x1623000f  bne         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14A85Cu;
    {
        const bool branch_taken_0x14a85c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A85Cu;
        // 0x14a860: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a85c) {
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A864u;
    // 0x14a864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A864u;
    {
        const bool branch_taken_0x14a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a864) {
            ctx->pc = 0x14A874u;
            goto label_14a874;
        }
    }
    ctx->pc = 0x14A86Cu;
label_14a86c:
    // 0x14a86c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A86Cu;
    {
        const bool branch_taken_0x14a86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A86Cu;
        // 0x14a870: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a86c) {
            ctx->pc = 0x14A884u;
            goto label_14a884;
        }
    }
    ctx->pc = 0x14A874u;
label_14a874:
    // 0x14a874: 0xc052bea  jal         func_14AFA8
    ctx->pc = 0x14A874u;
    SET_GPR_U32(ctx, 31, 0x14A87Cu);
    ctx->pc = 0x14A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A874u;
    // 0x14a878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14AFA8u, 0x14A874u, 0x14A87Cu)) {
        return;
    }
    ctx->pc = 0x14A87Cu;
label_14a87c:
    // 0x14a87c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14A87Cu;
    {
        const bool branch_taken_0x14a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A87Cu;
        // 0x14a880: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a87c) {
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A884u;
label_14a884:
    // 0x14a884: 0x8c438900  lw          $v1, -0x7700($v0)
    ctx->pc = 0x14a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936832)));
    // 0x14a888: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A888u;
    {
        const bool branch_taken_0x14a888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A888u;
        // 0x14a88c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a888) {
            ctx->pc = 0x14A89Cu;
            goto label_14a89c;
        }
    }
    ctx->pc = 0x14A890u;
    // 0x14a890: 0xc052a7c  jal         func_14A9F0
    ctx->pc = 0x14A890u;
    SET_GPR_U32(ctx, 31, 0x14A898u);
    ctx->pc = 0x14A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A890u;
    // 0x14a894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14A9F0u, 0x14A890u, 0x14A898u)) {
        return;
    }
    ctx->pc = 0x14A898u;
label_14a898:
    // 0x14a898: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14a898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_14a89c:
    // 0x14a89c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14a89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a8a0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14a8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a8a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14a8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8A8u;
        // 0x14a8ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A8B0u;
}
