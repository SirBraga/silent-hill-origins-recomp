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

// Function: sub_002312A8
// Address: 0x2312a8 - 0x2314c0
void sub_002312A8_0x2312a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002312A8_0x2312a8");
#endif

    switch (ctx->pc) {
        case 0x2312f0u: goto label_2312f0;
        case 0x231304u: goto label_231304;
        case 0x2313b4u: goto label_2313b4;
        case 0x23141cu: goto label_23141c;
        default: break;
    }

    ctx->pc = 0x2312a8u;

    // 0x2312a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2312a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2312ac: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2312b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2312b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2312b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2312b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2312b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2312b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2312bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2312BCu;
    {
        const bool branch_taken_0x2312bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312BCu;
        // 0x2312c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312bc) {
            ctx->pc = 0x2312F0u;
            goto label_2312f0;
        }
    }
    ctx->pc = 0x2312C4u;
    // 0x2312c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2312c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2312cc: 0x2442aa00  addiu       $v0, $v0, -0x5600
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945280));
    // 0x2312d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2312d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2312d8: 0x800008  jr          $a0
    ctx->pc = 0x2312D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2312E0u: goto label_2312e0;
            case 0x2313A8u: goto label_2313a8;
            case 0x231410u: goto label_231410;
            case 0x231480u: goto label_231480;
            case 0x231494u: goto label_231494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2312D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2312E0u;
label_2312e0:
    // 0x2312e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2312e4: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x2312e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x2312e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2312E8u;
    {
        const bool branch_taken_0x2312e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2312e8) {
            ctx->pc = 0x2312F8u;
            goto label_2312f8;
        }
    }
    ctx->pc = 0x2312F0u;
label_2312f0:
    // 0x2312f0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2312F0u;
    {
        const bool branch_taken_0x2312f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2312F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F0u;
        // 0x2312f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312f0) {
            ctx->pc = 0x2314B0u;
            goto label_2314b0;
        }
    }
    ctx->pc = 0x2312F8u;
label_2312f8:
    // 0x2312f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2312f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2312fc: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2312FCu;
    SET_GPR_U32(ctx, 31, 0x231304u);
    ctx->pc = 0x231300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2312FCu;
    // 0x231300: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2312FCu, 0x231304u)) {
        return;
    }
    ctx->pc = 0x231304u;
label_231304:
    // 0x231304: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231304u;
    {
        const bool branch_taken_0x231304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231304u;
        // 0x231308: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231304) {
            ctx->pc = 0x2312F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312f0;
        }
    }
    ctx->pc = 0x23130Cu;
    // 0x23130c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x23130cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x231310: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x231310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x231314: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x231314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x231318: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x231318u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x23131c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x231320: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x231320u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x231324: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x231324u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x231328: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x231328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23132c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23132Cu;
    {
        const bool branch_taken_0x23132c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x231330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23132Cu;
        // 0x231330: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23132c) {
            ctx->pc = 0x231340u;
            goto label_231340;
        }
    }
    ctx->pc = 0x231334u;
    // 0x231334: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231338: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x231338u;
    {
        const bool branch_taken_0x231338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231338u;
        // 0x23133c: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231338) {
            ctx->pc = 0x231398u;
            goto label_231398;
        }
    }
    ctx->pc = 0x231340u;
label_231340:
    // 0x231340: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x231344: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x231344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x231348: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x231348u;
    {
        const bool branch_taken_0x231348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231348u;
        // 0x23134c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231348) {
            ctx->pc = 0x231374u;
            goto label_231374;
        }
    }
    ctx->pc = 0x231350u;
    // 0x231350: 0x34049091  ori         $a0, $zero, 0x9091
    ctx->pc = 0x231350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37009);
    // 0x231354: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x231354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x231358: 0x34848180  ori         $a0, $a0, 0x8180
    ctx->pc = 0x231358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33152);
    // 0x23135c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x231360: 0x34849091  ori         $a0, $a0, 0x9091
    ctx->pc = 0x231360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x231364: 0x42378  dsll        $a0, $a0, 13
    ctx->pc = 0x231364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 13);
    // 0x231368: 0x34841030  ori         $a0, $a0, 0x1030
    ctx->pc = 0x231368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4144);
    // 0x23136c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23136Cu;
    {
        const bool branch_taken_0x23136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0xaf908eb4  sw          $s0, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23136c) {
            ctx->pc = 0x231398u;
            goto label_231398;
        }
    }
    ctx->pc = 0x231374u;
label_231374:
    // 0x231374: 0x3404c0e2  ori         $a0, $zero, 0xC0E2
    ctx->pc = 0x231374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49378);
    // 0x231378: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x231378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x23137c: 0x348490d5  ori         $a0, $a0, 0x90D5
    ctx->pc = 0x23137cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37077);
    // 0x231380: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x231380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x231384: 0x3484c580  ori         $a0, $a0, 0xC580
    ctx->pc = 0x231384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)50560);
    // 0x231388: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x231388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x23138c: 0x34843524  ori         $a0, $a0, 0x3524
    ctx->pc = 0x23138cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13604);
    // 0x231390: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231394: 0xac223f24  sw          $v0, 0x3F24($at)
    ctx->pc = 0x231394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F24u, _value); } while (0);
label_231398:
    // 0x231398: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23139c: 0x70643389  pcpyld      $a2, $v1, $a0
    ctx->pc = 0x23139cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x2313a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2313A0u;
    {
        const bool branch_taken_0x2313a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A0u;
        // 0x2313a4: 0x8f8290bc  lw          $v0, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a0) {
            ctx->pc = 0x231470u;
            goto label_231470;
        }
    }
    ctx->pc = 0x2313A8u;
label_2313a8:
    // 0x2313a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2313a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2313ac: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2313ACu;
    SET_GPR_U32(ctx, 31, 0x2313B4u);
    ctx->pc = 0x2313B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313ACu;
    // 0x2313b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2313ACu, 0x2313B4u)) {
        return;
    }
    ctx->pc = 0x2313B4u;
label_2313b4:
    // 0x2313b4: 0x1040ffce  beqz        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2313B4u;
    {
        const bool branch_taken_0x2313b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313B4u;
        // 0x2313b8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313b4) {
            ctx->pc = 0x2312F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312f0;
        }
    }
    ctx->pc = 0x2313BCu;
    // 0x2313bc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2313bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2313c0: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2313c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2313c4: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x2313c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x2313c8: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x2313c8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x2313cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2313d0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2313d4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2313d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2313d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2313dc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2313dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2313e0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2313e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2313e4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x2313e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2313e8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2313ec: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x2313ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2313f0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x2313f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2313f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2313f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2313f8: 0x31e3a  dsrl        $v1, $v1, 24
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 24);
    // 0x2313fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x231400: 0x70a43389  pcpyld      $a2, $a1, $a0
    ctx->pc = 0x231400u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x231404: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x231404u;
    {
        const bool branch_taken_0x231404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231404u;
        // 0x231408: 0xff848490  sd          $a0, -0x7B70($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231404) {
            ctx->pc = 0x231470u;
            goto label_231470;
        }
    }
    ctx->pc = 0x23140Cu;
    // 0x23140c: 0x0  nop
    ctx->pc = 0x23140cu;
    // NOP
label_231410:
    // 0x231410: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x231414: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x231414u;
    SET_GPR_U32(ctx, 31, 0x23141Cu);
    ctx->pc = 0x231418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231414u;
    // 0x231418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x231414u, 0x23141Cu)) {
        return;
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x1040ffb4  beqz        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x23141Cu;
    {
        const bool branch_taken_0x23141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23141Cu;
        // 0x231420: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23141c) {
            ctx->pc = 0x2312F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312f0;
        }
    }
    ctx->pc = 0x231424u;
    // 0x231424: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x231424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x231428: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x23142c: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x23142cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x231430: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x231430u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x231434: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x231438: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x23143c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x23143cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x231440: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x231444: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231448: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23144c: 0xdf838460  ld          $v1, -0x7BA0($gp)
    ctx->pc = 0x23144cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x231450: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x231454: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x231454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x231458: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x231458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23145c: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x23145cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x231460: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x231460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x231464: 0x70c33389  pcpyld      $a2, $a2, $v1
    ctx->pc = 0x231464u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x231468: 0xff838460  sd          $v1, -0x7BA0($gp)
    ctx->pc = 0x231468u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 3));
    // 0x23146c: 0x0  nop
    ctx->pc = 0x23146cu;
    // NOP
label_231470:
    // 0x231470: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x231470u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x231474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x231478: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x231478u;
    {
        const bool branch_taken_0x231478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231478u;
        // 0x23147c: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231478) {
            ctx->pc = 0x2314ACu;
            goto label_2314ac;
        }
    }
    ctx->pc = 0x231480u;
label_231480:
    // 0x231480: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231484: 0xac204180  sw          $zero, 0x4180($at)
    ctx->pc = 0x231484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4180u, _value); } while (0);
    // 0x231488: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x231488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23148c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23148Cu;
    {
        const bool branch_taken_0x23148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23148Cu;
        // 0x231490: 0xe7809114  swc1        $f0, -0x6EEC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23148c) {
            ctx->pc = 0x2314ACu;
            goto label_2314ac;
        }
    }
    ctx->pc = 0x231494u;
label_231494:
    // 0x231494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x231494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231498: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x231498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23149c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x23149cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2314a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2314A0u;
    {
        const bool branch_taken_0x2314a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314A0u;
        // 0x2314a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314a0) {
            ctx->pc = 0x2314B0u;
            goto label_2314b0;
        }
    }
    ctx->pc = 0x2314A8u;
    // 0x2314a8: 0xaf8384b0  sw          $v1, -0x7B50($gp)
    ctx->pc = 0x2314a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 3));
label_2314ac:
    // 0x2314ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2314acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2314b0:
    // 0x2314b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2314b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2314b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2314b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2314b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2314B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2314BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B8u;
        // 0x2314bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2314B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2314C0u;
}
