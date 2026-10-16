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

// Function: sub_0022F778
// Address: 0x22f778 - 0x22fa28
void sub_0022F778_0x22f778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F778_0x22f778");
#endif

    switch (ctx->pc) {
        case 0x22f798u: goto label_22f798;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f8fcu: goto label_22f8fc;
        case 0x22f9a8u: goto label_22f9a8;
        case 0x22f9dcu: goto label_22f9dc;
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22fa04u: goto label_22fa04;
        default: break;
    }

    ctx->pc = 0x22f778u;

    // 0x22f778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22f77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f780: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22f784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22f784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f788: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22f78c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22f78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f790: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22f794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22f798:
    // 0x22f798: 0x1260005f  beqz        $s3, . + 4 + (0x5F << 2)
    ctx->pc = 0x22F798u;
    {
        const bool branch_taken_0x22f798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F798u;
        // 0x22f79c: 0x8f8390bc  lw          $v1, -0x6F44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f798) {
            ctx->pc = 0x22F918u;
            goto label_22f918;
        }
    }
    ctx->pc = 0x22F7A0u;
    // 0x22f7a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7A0u;
    {
        const bool branch_taken_0x22f7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7A0u;
        // 0x22f7a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7a0) {
            ctx->pc = 0x22F7B8u;
            goto label_22f7b8;
        }
    }
    ctx->pc = 0x22F7A8u;
    // 0x22f7a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f7ac: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f7b0: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x22f7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f7b4: 0x0  nop
    ctx->pc = 0x22f7b4u;
    // NOP
label_22f7b8:
    // 0x22f7b8: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7B8u;
        // 0x22f7bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F8D0u;
            goto label_22f8d0;
        }
    }
    ctx->pc = 0x22F7C0u;
    // 0x22f7c0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f7c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22f7c8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f7cc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F7CCu;
    {
        const bool branch_taken_0x22f7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7CCu;
        // 0x22f7d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7cc) {
            ctx->pc = 0x22F808u;
            goto label_22f808;
        }
    }
    ctx->pc = 0x22F7D4u;
    // 0x22f7d4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f7d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f7dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f7dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f7e0: 0xf  sync
    ctx->pc = 0x22f7e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f7e4: 0x40f  sync.p
    ctx->pc = 0x22f7e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f7e8:
    // 0x22f7e8: 0x0  nop
    ctx->pc = 0x22f7e8u;
    // NOP
    // 0x22f7ec: 0x0  nop
    ctx->pc = 0x22f7ecu;
    // NOP
    // 0x22f7f0: 0x0  nop
    ctx->pc = 0x22f7f0u;
    // NOP
    // 0x22f7f4: 0x0  nop
    ctx->pc = 0x22f7f4u;
    // NOP
    // 0x22f7f8: 0x0  nop
    ctx->pc = 0x22f7f8u;
    // NOP
    // 0x22f7fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F7FCu;
    {
        const bool branch_taken_0x22f7fc = (false);
        if (branch_taken_0x22f7fc) {
            ctx->pc = 0x22F7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f7e8;
        }
    }
    ctx->pc = 0x22F804u;
    // 0x22f804: 0x0  nop
    ctx->pc = 0x22f804u;
    // NOP
label_22f808:
    // 0x22f808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f80c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f810: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22f810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22f814: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22f818: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22f818u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22f81c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22f81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22f820: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f824: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22f828: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22f828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22f82c: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22f82cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f830: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22f834: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22f838: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22f83c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22f840: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22f844: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f848: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22f848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22f84c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22f850: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22f854: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22f854u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22f858: 0xf  sync
    ctx->pc = 0x22f858u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f85c: 0x40f  sync.p
    ctx->pc = 0x22f85cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f860: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f864: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22f864u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22f868: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F868u;
    {
        const bool branch_taken_0x22f868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F868u;
        // 0x22f86c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f868) {
            ctx->pc = 0x22F8A0u;
            goto label_22f8a0;
        }
    }
    ctx->pc = 0x22F870u;
    // 0x22f870: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f874: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22f878: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22f87c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F87Cu;
    {
        const bool branch_taken_0x22f87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F87Cu;
        // 0x22f880: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f87c) {
            ctx->pc = 0x22F8A8u;
            goto label_22f8a8;
        }
    }
    ctx->pc = 0x22F884u;
    // 0x22f884: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22f888: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22f88c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f894: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f898: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22f898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22f89c: 0x0  nop
    ctx->pc = 0x22f89cu;
    // NOP
label_22f8a0:
    // 0x22f8a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f8a4: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22f8a8:
    // 0x22f8a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f8ac: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f8b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f8b4: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22f8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22f8b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f8bc: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f8bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f8c0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f8c4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22f8c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22f8c8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f8cc: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22f8ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22f8d0:
    // 0x22f8d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f8d4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f8d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x22f8dc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f8e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22F8E0u;
    {
        const bool branch_taken_0x22f8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8E0u;
        // 0x22f8e4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8e0) {
            ctx->pc = 0x22F918u;
            goto label_22f918;
        }
    }
    ctx->pc = 0x22F8E8u;
    // 0x22f8e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f8ec: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f8f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f8f0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f8f4: 0xf  sync
    ctx->pc = 0x22f8f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f8f8: 0x40f  sync.p
    ctx->pc = 0x22f8f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f8fc:
    // 0x22f8fc: 0x0  nop
    ctx->pc = 0x22f8fcu;
    // NOP
    // 0x22f900: 0x0  nop
    ctx->pc = 0x22f900u;
    // NOP
    // 0x22f904: 0x0  nop
    ctx->pc = 0x22f904u;
    // NOP
    // 0x22f908: 0x0  nop
    ctx->pc = 0x22f908u;
    // NOP
    // 0x22f90c: 0x0  nop
    ctx->pc = 0x22f90cu;
    // NOP
    // 0x22f910: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F910u;
    {
        const bool branch_taken_0x22f910 = (false);
        if (branch_taken_0x22f910) {
            ctx->pc = 0x22F8FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f8fc;
        }
    }
    ctx->pc = 0x22F918u;
label_22f918:
    // 0x22f918: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x22f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22f91c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x22f920: 0x52182b  sltu        $v1, $v0, $s2
    ctx->pc = 0x22f920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x22f924: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22f924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22f928: 0x8ca53ed8  lw          $a1, 0x3ED8($a1)
    ctx->pc = 0x22f928u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3ED8u));
    // 0x22f92c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x22f92cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x22f930: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x22f934: 0x8cc63edc  lw          $a2, 0x3EDC($a2)
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B3EDCu));
    // 0x22f938: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x22f938u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x22f93c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22f940: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x22f940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22f944: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22f948: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x22f94c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x22f94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22f950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22F968u;
            goto label_22f968;
        }
    }
    ctx->pc = 0x22F958u;
    // 0x22f958: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f95c: 0xac253ed0  sw          $a1, 0x3ED0($at)
    ctx->pc = 0x22f95cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3ED0u, _value); } while (0);
    // 0x22f960: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x22F960u;
    {
        const bool branch_taken_0x22f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F960u;
        // 0x22f964: 0xaf838e68  sw          $v1, -0x7198($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f960) {
            ctx->pc = 0x22FA0Cu;
            goto label_22fa0c;
        }
    }
    ctx->pc = 0x22F968u;
label_22f968:
    // 0x22f968: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f96c: 0x8c633eac  lw          $v1, 0x3EAC($v1)
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f970: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x22f970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x22f974: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x22f974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
    // 0x22f978: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22f978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22f97c: 0x8ca53ec8  lw          $a1, 0x3EC8($a1)
    ctx->pc = 0x22f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EC8u));
    // 0x22f980: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x22f980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22f984: 0x2463009f  addiu       $v1, $v1, 0x9F
    ctx->pc = 0x22f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 159));
    // 0x22f988: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x22f988u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x22f98c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x22f990: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22f994: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x22f994u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22f998: 0x14a0001c  bnez        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F998u;
        // 0x22f99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22FA0Cu;
            goto label_22fa0c;
        }
    }
    ctx->pc = 0x22F9A0u;
    // 0x22f9a0: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22F9A0u;
    SET_GPR_U32(ctx, 31, 0x22F9A8u);
    ctx->pc = 0x22F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9A0u;
    // 0x22f9a4: 0x8f918e84  lw          $s1, -0x717C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22F9A0u, 0x22F9A8u)) {
        return;
    }
    ctx->pc = 0x22F9A8u;
label_22f9a8:
    // 0x22f9a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f9ac: 0x90423ecc  lbu         $v0, 0x3ECC($v0)
    ctx->pc = 0x22f9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3ECCu));
    // 0x22f9b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f9b4: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x22f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x22f9b8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22f9bc: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22f9c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f9c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22f9c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f9cc: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F9CCu;
    {
        const bool branch_taken_0x22f9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9CCu;
        // 0x22f9d0: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9cc) {
            ctx->pc = 0x22F9E0u;
            goto label_22f9e0;
        }
    }
    ctx->pc = 0x22F9D4u;
    // 0x22f9d4: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22F9D4u;
    SET_GPR_U32(ctx, 31, 0x22F9DCu);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22F9D4u, 0x22F9DCu)) {
        return;
    }
    ctx->pc = 0x22F9DCu;
label_22f9dc:
    // 0x22f9dc: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x22f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_22f9e0:
    // 0x22f9e0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F9E0u;
    {
        const bool branch_taken_0x22f9e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9E0u;
        // 0x22f9e4: 0x102902  srl         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9e0) {
            ctx->pc = 0x22F9F8u;
            goto label_22f9f8;
        }
    }
    ctx->pc = 0x22F9E8u;
    // 0x22f9e8: 0xc08ba56  jal         func_22E958
    ctx->pc = 0x22F9E8u;
    SET_GPR_U32(ctx, 31, 0x22F9F0u);
    ctx->pc = 0x22F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9E8u;
    // 0x22f9ec: 0x102102  srl         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E958u, 0x22F9E8u, 0x22F9F0u)) {
        return;
    }
    ctx->pc = 0x22F9F0u;
label_22f9f0:
    // 0x22f9f0: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x22F9F0u;
    {
        const bool branch_taken_0x22f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f9f0) {
            ctx->pc = 0x22F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f798;
        }
    }
    ctx->pc = 0x22F9F8u;
label_22f9f8:
    // 0x22f9f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x22f9fc: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x22F9FCu;
    SET_GPR_U32(ctx, 31, 0x22FA04u);
    ctx->pc = 0x22FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9FCu;
    // 0x22fa00: 0x2242024  and         $a0, $s1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x22F9FCu, 0x22FA04u)) {
        return;
    }
    ctx->pc = 0x22FA04u;
label_22fa04:
    // 0x22fa04: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x22FA04u;
    {
        const bool branch_taken_0x22fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa04) {
            ctx->pc = 0x22F798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f798;
        }
    }
    ctx->pc = 0x22FA0Cu;
label_22fa0c:
    // 0x22fa0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22fa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22fa10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22fa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fa14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22fa14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fa18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22fa18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fa1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa20: 0x3e00008  jr          $ra
    ctx->pc = 0x22FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA20u;
        // 0x22fa24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FA28u;
}
