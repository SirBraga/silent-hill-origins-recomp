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

// Function: sub_001C64A8
// Address: 0x1c64a8 - 0x1c6688
void sub_001C64A8_0x1c64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C64A8_0x1c64a8");
#endif

    switch (ctx->pc) {
        case 0x1c64dcu: goto label_1c64dc;
        case 0x1c64f0u: goto label_1c64f0;
        case 0x1c6508u: goto label_1c6508;
        case 0x1c6560u: goto label_1c6560;
        case 0x1c6568u: goto label_1c6568;
        case 0x1c6578u: goto label_1c6578;
        case 0x1c658cu: goto label_1c658c;
        case 0x1c65a0u: goto label_1c65a0;
        case 0x1c6608u: goto label_1c6608;
        case 0x1c661cu: goto label_1c661c;
        case 0x1c6630u: goto label_1c6630;
        default: break;
    }

    ctx->pc = 0x1c64a8u;

    // 0x1c64a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c64ac: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c64acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c64b0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c64b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c64b4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c64b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c64b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c64b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c64bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c64bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c64c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c64c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c64c4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c64c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1c64c8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1c64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1c64cc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1c64ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1c64d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c64d4: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C64D4u;
    SET_GPR_U32(ctx, 31, 0x1C64DCu);
    ctx->pc = 0x1C64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64D4u;
    // 0x1c64d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C64D4u, 0x1C64DCu)) {
        return;
    }
    ctx->pc = 0x1C64DCu;
label_1c64dc:
    // 0x1c64dc: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1c64dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c64e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C64E0u;
    {
        const bool branch_taken_0x1c64e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64E0u;
        // 0x1c64e4: 0x26220270  addiu       $v0, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64e0) {
            ctx->pc = 0x1C64F4u;
            goto label_1c64f4;
        }
    }
    ctx->pc = 0x1C64E8u;
    // 0x1c64e8: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C64E8u;
    SET_GPR_U32(ctx, 31, 0x1C64F0u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1C64E8u, 0x1C64F0u)) {
        return;
    }
    ctx->pc = 0x1C64F0u;
label_1c64f0:
    // 0x1c64f0: 0x26220270  addiu       $v0, $s1, 0x270
    ctx->pc = 0x1c64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1c64f4:
    // 0x1c64f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c64f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c64fc: 0x26300278  addiu       $s0, $s1, 0x278
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    // 0x1c6500: 0x263402a0  addiu       $s4, $s1, 0x2A0
    ctx->pc = 0x1c6500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1c6504: 0x263202a4  addiu       $s2, $s1, 0x2A4
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
label_1c6508:
    // 0x1c6508: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c6508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c650c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c650cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c6510: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c6514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6518: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c6518u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c651c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C651Cu;
    {
        const bool branch_taken_0x1c651c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C651Cu;
        // 0x1c6520: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c651c) {
            ctx->pc = 0x1C6508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6508;
        }
    }
    ctx->pc = 0x1C6524u;
    // 0x1c6524: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c6524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c6528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c652c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c652cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6530: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1c6530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c6534: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1c6534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1c6538: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1c6538u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c653c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1c653cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6540: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c6540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6544: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1c6544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c6548: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c6548u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c654c: 0x26350278  addiu       $s5, $s1, 0x278
    ctx->pc = 0x1c654cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    // 0x1c6550: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1c6550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1c6554: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1c6554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1c6558: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C6558u;
    SET_GPR_U32(ctx, 31, 0x1C6560u);
    ctx->pc = 0x1C655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6558u;
    // 0x1c655c: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6558u, 0x1C6560u)) {
        return;
    }
    ctx->pc = 0x1C6560u;
label_1c6560:
    // 0x1c6560: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c6560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c6564: 0x2474f1b8  addiu       $s4, $v1, -0xE48
    ctx->pc = 0x1c6564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963640));
label_1c6568:
    // 0x1c6568: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c6568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c656c: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x1c656cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1c6570: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C6570u;
    SET_GPR_U32(ctx, 31, 0x1C6578u);
    ctx->pc = 0x1C6574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6570u;
    // 0x1c6574: 0x8c5098e8  lw          $s0, -0x6718($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C6570u, 0x1C6578u)) {
        return;
    }
    ctx->pc = 0x1C6578u;
label_1c6578:
    // 0x1c6578: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6578u;
    {
        const bool branch_taken_0x1c6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6578u;
        // 0x1c657c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6578) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C6580u;
    // 0x1c6580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6584: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C6584u;
    SET_GPR_U32(ctx, 31, 0x1C658Cu);
    ctx->pc = 0x1C6588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6584u;
    // 0x1c6588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C6584u, 0x1C658Cu)) {
        return;
    }
    ctx->pc = 0x1C658Cu;
label_1c658c:
    // 0x1c658c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C658Cu;
    {
        const bool branch_taken_0x1c658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C658Cu;
        // 0x1c6590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c658c) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C6594u;
    // 0x1c6594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6598: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1C6598u;
    SET_GPR_U32(ctx, 31, 0x1C65A0u);
    ctx->pc = 0x1C659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6598u;
    // 0x1c659c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C6598u, 0x1C65A0u)) {
        return;
    }
    ctx->pc = 0x1C65A0u;
label_1c65a0:
    // 0x1c65a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C65A0u;
    {
        const bool branch_taken_0x1c65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65A0u;
        // 0x1c65a4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65a0) {
            ctx->pc = 0x1C65ACu;
            goto label_1c65ac;
        }
    }
    ctx->pc = 0x1C65A8u;
label_1c65a8:
    // 0x1c65a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c65a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c65ac:
    // 0x1c65ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C65ACu;
    {
        const bool branch_taken_0x1c65ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65ac) {
            ctx->pc = 0x1C65B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C65ACu;
            // 0x1c65b0: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65B4u;
            goto label_1c65b4;
        }
    }
    ctx->pc = 0x1C65B4u;
label_1c65b4:
    // 0x1c65b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c65b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C65B8u;
    {
        const bool branch_taken_0x1c65b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B8u;
        // 0x1c65bc: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b8) {
            ctx->pc = 0x1C65C8u;
            goto label_1c65c8;
        }
    }
    ctx->pc = 0x1C65C0u;
    // 0x1c65c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C65C0u;
    {
        const bool branch_taken_0x1c65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65C0u;
        // 0x1c65c4: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65c0) {
            ctx->pc = 0x1C65CCu;
            goto label_1c65cc;
        }
    }
    ctx->pc = 0x1C65C8u;
label_1c65c8:
    // 0x1c65c8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1c65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c65cc:
    // 0x1c65cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c65ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c65d0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c65d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c65d4: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1c65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1c65d8: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1c65d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1c65dc: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1c65dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1c65e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c65e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c65e4: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1c65e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1c65e8: 0x2bc20006  slti        $v0, $fp, 0x6
    ctx->pc = 0x1c65e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c65ec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C65ECu;
    {
        const bool branch_taken_0x1c65ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65ECu;
        // 0x1c65f0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65ec) {
            ctx->pc = 0x1C6568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6568;
        }
    }
    ctx->pc = 0x1C65F4u;
    // 0x1c65f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c65f8: 0x8c5098e8  lw          $s0, -0x6718($v0)
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3398E8u));
    // 0x1c65fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c6600: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C6600u;
    SET_GPR_U32(ctx, 31, 0x1C6608u);
    ctx->pc = 0x1C6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6600u;
    // 0x1c6604: 0x2452eff8  addiu       $s2, $v0, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C6600u, 0x1C6608u)) {
        return;
    }
    ctx->pc = 0x1C6608u;
label_1c6608:
    // 0x1c6608: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6608u;
    {
        const bool branch_taken_0x1c6608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6608u;
        // 0x1c660c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6608) {
            ctx->pc = 0x1C6638u;
            goto label_1c6638;
        }
    }
    ctx->pc = 0x1C6610u;
    // 0x1c6610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6614: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C6614u;
    SET_GPR_U32(ctx, 31, 0x1C661Cu);
    ctx->pc = 0x1C6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6614u;
    // 0x1c6618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C6614u, 0x1C661Cu)) {
        return;
    }
    ctx->pc = 0x1C661Cu;
label_1c661c:
    // 0x1c661c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C661Cu;
    {
        const bool branch_taken_0x1c661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C661Cu;
        // 0x1c6620: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c661c) {
            ctx->pc = 0x1C6638u;
            goto label_1c6638;
        }
    }
    ctx->pc = 0x1C6624u;
    // 0x1c6624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6628: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1C6628u;
    SET_GPR_U32(ctx, 31, 0x1C6630u);
    ctx->pc = 0x1C662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6628u;
    // 0x1c662c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C6628u, 0x1C6630u)) {
        return;
    }
    ctx->pc = 0x1C6630u;
label_1c6630:
    // 0x1c6630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6630u;
    {
        const bool branch_taken_0x1c6630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6630u;
        // 0x1c6634: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6630) {
            ctx->pc = 0x1C663Cu;
            goto label_1c663c;
        }
    }
    ctx->pc = 0x1C6638u;
label_1c6638:
    // 0x1c6638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c663c:
    // 0x1c663c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C663Cu;
    {
        const bool branch_taken_0x1c663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c663c) {
            ctx->pc = 0x1C6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C663Cu;
            // 0x1c6640: 0xae200270  sw          $zero, 0x270($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6644u;
            goto label_1c6644;
        }
    }
    ctx->pc = 0x1C6644u;
label_1c6644:
    // 0x1c6644: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1c6644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
    // 0x1c6648: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1c6648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x1c664c: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1c664cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x1c6650: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c6650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x1c6654: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c6654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c6658: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c6658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c665c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c665cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c6660: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c6660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6664: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c6664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c6668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c666c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c666cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6670: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1c6670u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6674: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1c6674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c667c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C667Cu;
        // 0x1c6680: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6684u;
    // 0x1c6684: 0x0  nop
    ctx->pc = 0x1c6684u;
    // NOP
    ctx->pc = 0x1c6688u;
}
