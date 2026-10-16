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

// Function: sub_0022F4F8
// Address: 0x22f4f8 - 0x22f680
void sub_0022F4F8_0x22f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F4F8_0x22f4f8");
#endif

    switch (ctx->pc) {
        case 0x22f548u: goto label_22f548;
        case 0x22f65cu: goto label_22f65c;
        default: break;
    }

    ctx->pc = 0x22f4f8u;

    // 0x22f4f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f4fc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x22f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x22f500: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F500u;
    {
        const bool branch_taken_0x22f500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F500u;
        // 0x22f504: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f500) {
            ctx->pc = 0x22F518u;
            goto label_22f518;
        }
    }
    ctx->pc = 0x22F508u;
    // 0x22f508: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f50c: 0x8c423ea8  lw          $v0, 0x3EA8($v0)
    ctx->pc = 0x22f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f510: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f514: 0x0  nop
    ctx->pc = 0x22f514u;
    // NOP
label_22f518:
    // 0x22f518: 0x11200045  beqz        $t1, . + 4 + (0x45 << 2)
    ctx->pc = 0x22F518u;
    {
        const bool branch_taken_0x22f518 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F518u;
        // 0x22f51c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f518) {
            ctx->pc = 0x22F630u;
            goto label_22f630;
        }
    }
    ctx->pc = 0x22F520u;
    // 0x22f520: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f524u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22f528: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f52c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22F52Cu;
    {
        const bool branch_taken_0x22f52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F52Cu;
        // 0x22f530: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f52c) {
            ctx->pc = 0x22F568u;
            goto label_22f568;
        }
    }
    ctx->pc = 0x22F534u;
    // 0x22f534: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f538: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f53c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f53cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f540: 0xf  sync
    ctx->pc = 0x22f540u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f544: 0x40f  sync.p
    ctx->pc = 0x22f544u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f548:
    // 0x22f548: 0x0  nop
    ctx->pc = 0x22f548u;
    // NOP
    // 0x22f54c: 0x0  nop
    ctx->pc = 0x22f54cu;
    // NOP
    // 0x22f550: 0x0  nop
    ctx->pc = 0x22f550u;
    // NOP
    // 0x22f554: 0x0  nop
    ctx->pc = 0x22f554u;
    // NOP
    // 0x22f558: 0x0  nop
    ctx->pc = 0x22f558u;
    // NOP
    // 0x22f55c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F55Cu;
    {
        const bool branch_taken_0x22f55c = (false);
        if (branch_taken_0x22f55c) {
            ctx->pc = 0x22F548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f548;
        }
    }
    ctx->pc = 0x22F564u;
    // 0x22f564: 0x0  nop
    ctx->pc = 0x22f564u;
    // NOP
label_22f568:
    // 0x22f568: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f56c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22f56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f570: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x22f570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x22f574: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x22f578: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22f578u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x1000e010
    // 0x22f57c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x22f57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x22f580: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f584: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x22f588: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x22f588u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x22f58c: 0x8d083ea8  lw          $t0, 0x3EA8($t0)
    ctx->pc = 0x22f58cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f590: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x22f590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x22f594: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x22f594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x22f598: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x22f59c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x22f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x22f5a0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x22f5a4: 0x8ce73eac  lw          $a3, 0x3EAC($a3)
    ctx->pc = 0x22f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B3EACu));
    // 0x22f5a8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x22f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x22f5ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x22f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x22f5b0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x22f5b4: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x22f5b4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x22f5b8: 0xf  sync
    ctx->pc = 0x22f5b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f5bc: 0x40f  sync.p
    ctx->pc = 0x22f5bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f5c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22f5c4: 0x8c844164  lw          $a0, 0x4164($a0)
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4164u));
    // 0x22f5c8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F5C8u;
    {
        const bool branch_taken_0x22f5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5C8u;
        // 0x22f5cc: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5c8) {
            ctx->pc = 0x22F600u;
            goto label_22f600;
        }
    }
    ctx->pc = 0x22F5D0u;
    // 0x22f5d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f5d4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x22f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x22f5d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22f5dc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F5DCu;
    {
        const bool branch_taken_0x22f5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5DCu;
        // 0x22f5e0: 0x8f828e3c  lw          $v0, -0x71C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5dc) {
            ctx->pc = 0x22F608u;
            goto label_22f608;
        }
    }
    ctx->pc = 0x22F5E4u;
    // 0x22f5e4: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22f5e8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22f5ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f5f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22f5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22f5f4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f5f8: 0xac224164  sw          $v0, 0x4164($at)
    ctx->pc = 0x22f5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4164u, _value); } while (0);
    // 0x22f5fc: 0x0  nop
    ctx->pc = 0x22f5fcu;
    // NOP
label_22f600:
    // 0x22f600: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22f604: 0x8c423eac  lw          $v0, 0x3EAC($v0)
    ctx->pc = 0x22f604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EACu));
label_22f608:
    // 0x22f608: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22f608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22f60c: 0x8c633ea8  lw          $v1, 0x3EA8($v1)
    ctx->pc = 0x22f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EA8u));
    // 0x22f610: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f614: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x22f614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x22f618: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f61c: 0xac223eac  sw          $v0, 0x3EAC($at)
    ctx->pc = 0x22f61cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EACu, _value); } while (0);
    // 0x22f620: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f624: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x22f624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x22f628: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22f628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22f62c: 0xac233ea8  sw          $v1, 0x3EA8($at)
    ctx->pc = 0x22f62cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EA8u, _value); } while (0);
label_22f630:
    // 0x22f630: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x22f634: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22f634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22f638: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x22f63c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22f640: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22F640u;
    {
        const bool branch_taken_0x22f640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F640u;
        // 0x22f644: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f640) {
            ctx->pc = 0x22F678u;
            goto label_22f678;
        }
    }
    ctx->pc = 0x22F648u;
    // 0x22f648: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f64c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22f650: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22f650u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22f654: 0xf  sync
    ctx->pc = 0x22f654u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22f658: 0x40f  sync.p
    ctx->pc = 0x22f658u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22f65c:
    // 0x22f65c: 0x0  nop
    ctx->pc = 0x22f65cu;
    // NOP
    // 0x22f660: 0x0  nop
    ctx->pc = 0x22f660u;
    // NOP
    // 0x22f664: 0x0  nop
    ctx->pc = 0x22f664u;
    // NOP
    // 0x22f668: 0x0  nop
    ctx->pc = 0x22f668u;
    // NOP
    // 0x22f66c: 0x0  nop
    ctx->pc = 0x22f66cu;
    // NOP
    // 0x22f670: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F670u;
    {
        const bool branch_taken_0x22f670 = (false);
        if (branch_taken_0x22f670) {
            ctx->pc = 0x22F65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f65c;
        }
    }
    ctx->pc = 0x22F678u;
label_22f678:
    // 0x22f678: 0x3e00008  jr          $ra
    ctx->pc = 0x22F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F680u;
}
