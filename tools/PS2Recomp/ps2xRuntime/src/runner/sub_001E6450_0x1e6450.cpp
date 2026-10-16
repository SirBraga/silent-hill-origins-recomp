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

// Function: sub_001E6450
// Address: 0x1e6450 - 0x1e6640
void sub_001E6450_0x1e6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6450_0x1e6450");
#endif

    switch (ctx->pc) {
        case 0x1e6498u: goto label_1e6498;
        case 0x1e64a8u: goto label_1e64a8;
        case 0x1e64bcu: goto label_1e64bc;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6520u: goto label_1e6520;
        case 0x1e652cu: goto label_1e652c;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e660cu: goto label_1e660c;
        default: break;
    }

    ctx->pc = 0x1e6450u;

    // 0x1e6450: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e6454: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e6454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e6458: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e6458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e645c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6460: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e6460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e6464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6468: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e6468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e646c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6470: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e6470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e6474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6478: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e6478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e647c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e647cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e6480: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e6480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e6484: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e6484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e6488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e648c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1e648cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1e6490: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E6490u;
    SET_GPR_U32(ctx, 31, 0x1E6498u);
    ctx->pc = 0x1E6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6490u;
    // 0x1e6494: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E6490u, 0x1E6498u)) {
        return;
    }
    ctx->pc = 0x1E6498u;
label_1e6498:
    // 0x1e6498: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1e6498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1e649c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64a0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E64A0u;
    SET_GPR_U32(ctx, 31, 0x1E64A8u);
    ctx->pc = 0x1E64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64A0u;
    // 0x1e64a4: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E64A0u, 0x1E64A8u)) {
        return;
    }
    ctx->pc = 0x1E64A8u;
label_1e64a8:
    // 0x1e64a8: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1e64a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1e64ac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e64acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e64b0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e64b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e64b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E64B4u;
    SET_GPR_U32(ctx, 31, 0x1E64BCu);
    ctx->pc = 0x1E64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64B4u;
    // 0x1e64b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E64B4u, 0x1E64BCu)) {
        return;
    }
    ctx->pc = 0x1E64BCu;
label_1e64bc:
    // 0x1e64bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e64c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e64c4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e64c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e64c8: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e64cc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e64ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e64d0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e64d4: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E64D4u;
    {
        const bool branch_taken_0x1e64d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64D4u;
        // 0x1e64d8: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64d4) {
            ctx->pc = 0x1E655Cu;
            goto label_1e655c;
        }
    }
    ctx->pc = 0x1E64DCu;
    // 0x1e64dc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e64e0: 0x2bc38  dsll        $s7, $v0, 16
    ctx->pc = 0x1e64e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << 16);
    // 0x1e64e4: 0x24150208  addiu       $s5, $zero, 0x208
    ctx->pc = 0x1e64e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x1e64e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e64ec: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1e64ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e64f0: 0x2b438  dsll        $s6, $v0, 16
    ctx->pc = 0x1e64f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 16);
    // 0x1e64f4: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1e64f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e64f8:
    // 0x1e64f8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1e64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1e64fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6500: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x1e6500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1e6504: 0x118240  sll         $s0, $s1, 9
    ctx->pc = 0x1e6504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x1e6508: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6508u;
    SET_GPR_U32(ctx, 31, 0x1E6510u);
    ctx->pc = 0x1E650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6508u;
    // 0x1e650c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6508u, 0x1E6510u)) {
        return;
    }
    ctx->pc = 0x1E6510u;
label_1e6510:
    // 0x1e6510: 0x26730200  addiu       $s3, $s3, 0x200
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    // 0x1e6514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6518: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6518u;
    SET_GPR_U32(ctx, 31, 0x1E6520u);
    ctx->pc = 0x1E651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6518u;
    // 0x1e651c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6518u, 0x1E6520u)) {
        return;
    }
    ctx->pc = 0x1E6520u;
label_1e6520:
    // 0x1e6520: 0x2b62825  or          $a1, $s5, $s6
    ctx->pc = 0x1e6520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 22));
    // 0x1e6524: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6524u;
    SET_GPR_U32(ctx, 31, 0x1E652Cu);
    ctx->pc = 0x1E6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6524u;
    // 0x1e6528: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6524u, 0x1E652Cu)) {
        return;
    }
    ctx->pc = 0x1E652Cu;
label_1e652c:
    // 0x1e652c: 0x26b50200  addiu       $s5, $s5, 0x200
    ctx->pc = 0x1e652cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x1e6530: 0x2972825  or          $a1, $s4, $s7
    ctx->pc = 0x1e6530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 23));
    // 0x1e6534: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6534u;
    SET_GPR_U32(ctx, 31, 0x1E653Cu);
    ctx->pc = 0x1E6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6534u;
    // 0x1e6538: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6534u, 0x1E653Cu)) {
        return;
    }
    ctx->pc = 0x1E653Cu;
label_1e653c:
    // 0x1e653c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6540: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e6540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e6544: 0x3c3202a  slt         $a0, $fp, $v1
    ctx->pc = 0x1e6544u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e6548: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e6548u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e654c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e6550: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e6550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6554: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1E6554u;
    {
        const bool branch_taken_0x1e6554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6554u;
        // 0x1e6558: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6554) {
            ctx->pc = 0x1E64F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e64f8;
        }
    }
    ctx->pc = 0x1E655Cu;
label_1e655c:
    // 0x1e655c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E655Cu;
    SET_GPR_U32(ctx, 31, 0x1E6564u);
    ctx->pc = 0x1E6560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E655Cu;
    // 0x1e6560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E655Cu, 0x1E6564u)) {
        return;
    }
    ctx->pc = 0x1E6564u;
label_1e6564:
    // 0x1e6564: 0x24074504  addiu       $a3, $zero, 0x4504
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17668));
    // 0x1e6568: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e656c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6570: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1E6570u;
    SET_GPR_U32(ctx, 31, 0x1E6578u);
    ctx->pc = 0x1E6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6570u;
    // 0x1e6574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1E6570u, 0x1E6578u)) {
        return;
    }
    ctx->pc = 0x1E6578u;
label_1e6578:
    // 0x1e6578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e657c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6580: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1e6580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1e6584: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1E6584u;
    SET_GPR_U32(ctx, 31, 0x1E658Cu);
    ctx->pc = 0x1E6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6584u;
    // 0x1e6588: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1E6584u, 0x1E658Cu)) {
        return;
    }
    ctx->pc = 0x1E658Cu;
label_1e658c:
    // 0x1e658c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e658cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6590: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6590u;
    {
        const bool branch_taken_0x1e6590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6590) {
            ctx->pc = 0x1E6594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6590u;
            // 0x1e6594: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E65CCu;
            goto label_1e65cc;
        }
    }
    ctx->pc = 0x1E6598u;
    // 0x1e6598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e6598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e659c: 0x0  nop
    ctx->pc = 0x1e659cu;
    // NOP
label_1e65a0:
    // 0x1e65a0: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E65A0u;
    SET_GPR_U32(ctx, 31, 0x1E65A8u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E65A0u, 0x1E65A8u)) {
        return;
    }
    ctx->pc = 0x1E65A8u;
label_1e65a8:
    // 0x1e65a8: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x1e65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1e65ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e65acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e65b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e65b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e65b4: 0x2a022000  slti        $v0, $s0, 0x2000
    ctx->pc = 0x1e65b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1e65b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E65B8u;
    {
        const bool branch_taken_0x1e65b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e65b8) {
            ctx->pc = 0x1E65A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e65a0;
        }
    }
    ctx->pc = 0x1E65C0u;
    // 0x1e65c0: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1E65C0u;
    SET_GPR_U32(ctx, 31, 0x1E65C8u);
    ctx->pc = 0x1E65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65C0u;
    // 0x1e65c4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1E65C0u, 0x1E65C8u)) {
        return;
    }
    ctx->pc = 0x1E65C8u;
label_1e65c8:
    // 0x1e65c8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1e65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e65cc:
    // 0x1e65cc: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x1E65CCu;
    SET_GPR_U32(ctx, 31, 0x1E65D4u);
    ctx->pc = 0x1E65D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65CCu;
    // 0x1e65d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x1E65CCu, 0x1E65D4u)) {
        return;
    }
    ctx->pc = 0x1E65D4u;
label_1e65d4:
    // 0x1e65d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e65d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65d8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65D8u;
        // 0x1e65dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E660Cu;
            goto label_1e660c;
        }
    }
    ctx->pc = 0x1E65E0u;
label_1e65e0:
    // 0x1e65e0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e65e4: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1e65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e65e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e65ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1e65ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e65f0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1e65f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e65f4: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x1e65f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e65f8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1e65f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e65fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E65FCu;
    {
        const bool branch_taken_0x1e65fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65FCu;
        // 0x1e6600: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65fc) {
            ctx->pc = 0x1E65E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e65e0;
        }
    }
    ctx->pc = 0x1E6604u;
    // 0x1e6604: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x1E6604u;
    SET_GPR_U32(ctx, 31, 0x1E660Cu);
    ctx->pc = 0x1E6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6604u;
    // 0x1e6608: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x1E6604u, 0x1E660Cu)) {
        return;
    }
    ctx->pc = 0x1E660Cu;
label_1e660c:
    // 0x1e660c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e660cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6610: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e6614: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e6614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6618: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e6618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e661c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e661cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6620: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e6620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6624: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e6624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6628: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e6628u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e662c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e662cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6630: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e6630u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6638: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6638u;
        // 0x1e663c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6640u;
}
