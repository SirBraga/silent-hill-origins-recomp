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

// Function: sub_002408B8
// Address: 0x2408b8 - 0x240a00
void sub_002408B8_0x2408b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002408B8_0x2408b8");
#endif

    switch (ctx->pc) {
        case 0x240934u: goto label_240934;
        case 0x24094cu: goto label_24094c;
        case 0x24096cu: goto label_24096c;
        case 0x2409c4u: goto label_2409c4;
        default: break;
    }

    ctx->pc = 0x2408b8u;

    // 0x2408b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2408b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2408bc: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x2408bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2408c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2408c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2408c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2408c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2408c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2408c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2408ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2408d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2408d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2408d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2408d8: 0x30c400f8  andi        $a0, $a2, 0xF8
    ctx->pc = 0x2408d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x2408dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2408dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2408e0: 0x30d39000  andi        $s3, $a2, 0x9000
    ctx->pc = 0x2408e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x2408e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2408e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2408e8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2408e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2408ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2408ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2408f0: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x2408f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x2408f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2408f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2408f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2408f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2408fc: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x2408fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x240900: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x240900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x240904: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x240904u;
    {
        const bool branch_taken_0x240904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240904u;
        // 0x240908: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240904) {
            ctx->pc = 0x2409DCu;
            goto label_2409dc;
        }
    }
    ctx->pc = 0x24090Cu;
    // 0x24090c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x240910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240914: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x240918: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24091c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240920: 0x800008  jr          $a0
    ctx->pc = 0x240920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240928u: goto label_240928;
            case 0x240988u: goto label_240988;
            case 0x2409A4u: goto label_2409a4;
            case 0x2409CCu: goto label_2409cc;
            case 0x2409DCu: goto label_2409dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240920u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240928u;
label_240928:
    // 0x240928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24092c: 0xc09020e  jal         func_240838
    ctx->pc = 0x24092Cu;
    SET_GPR_U32(ctx, 31, 0x240934u);
    ctx->pc = 0x240930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24092Cu;
    // 0x240930: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x240838u, 0x24092Cu, 0x240934u)) {
        return;
    }
    ctx->pc = 0x240934u;
label_240934:
    // 0x240934: 0x131a02  srl         $v1, $s3, 8
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x240938: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x240938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x24093c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240940: 0xa2020023  sb          $v0, 0x23($s0)
    ctx->pc = 0x240940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x240944: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x240944u;
    SET_GPR_U32(ctx, 31, 0x24094Cu);
    ctx->pc = 0x240948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240944u;
    // 0x240948: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x240944u, 0x24094Cu)) {
        return;
    }
    ctx->pc = 0x24094Cu;
label_24094c:
    // 0x24094c: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x24094cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x240950: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x240950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x240954: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240954u;
    {
        const bool branch_taken_0x240954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240954u;
        // 0x240958: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240954) {
            ctx->pc = 0x240964u;
            goto label_240964;
        }
    }
    ctx->pc = 0x24095Cu;
    // 0x24095c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x24095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x240960: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x240960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_240964:
    // 0x240964: 0xc08c0c4  jal         func_230310
    ctx->pc = 0x240964u;
    SET_GPR_U32(ctx, 31, 0x24096Cu);
    ctx->pc = 0x240968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240964u;
    // 0x240968: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x240964u, 0x24096Cu)) {
        return;
    }
    ctx->pc = 0x24096Cu;
label_24096c:
    // 0x24096c: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x24096cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x240970: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x240970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x240974: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x240974u;
    {
        const bool branch_taken_0x240974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240974u;
        // 0x240978: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240974) {
            ctx->pc = 0x2409C4u;
            goto label_2409c4;
        }
    }
    ctx->pc = 0x24097Cu;
    // 0x24097c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x24097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x240980: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x240980u;
    {
        const bool branch_taken_0x240980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240980u;
        // 0x240984: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240980) {
            ctx->pc = 0x2409C4u;
            goto label_2409c4;
        }
    }
    ctx->pc = 0x240988u;
label_240988:
    // 0x240988: 0x30c20f00  andi        $v0, $a2, 0xF00
    ctx->pc = 0x240988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x24098c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x24098cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x240990: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x240990u;
    {
        const bool branch_taken_0x240990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240990u;
        // 0x240994: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240990) {
            ctx->pc = 0x2409C4u;
            goto label_2409c4;
        }
    }
    ctx->pc = 0x240998u;
    // 0x240998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24099c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24099Cu;
    {
        const bool branch_taken_0x24099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24099Cu;
        // 0x2409a0: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24099c) {
            ctx->pc = 0x2409C4u;
            goto label_2409c4;
        }
    }
    ctx->pc = 0x2409A4u;
label_2409a4:
    // 0x2409a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2409a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2409a8: 0x8c423498  lw          $v0, 0x3498($v0)
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3498u));
    // 0x2409ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2409b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2409b4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2409B4u;
    {
        const bool branch_taken_0x2409b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2409B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409B4u;
        // 0x2409b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409b4) {
            ctx->pc = 0x2409C0u;
            goto label_2409c0;
        }
    }
    ctx->pc = 0x2409BCu;
    // 0x2409bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2409bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2409c0:
    // 0x2409c0: 0xa2050023  sb          $a1, 0x23($s0)
    ctx->pc = 0x2409c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 5));
label_2409c4:
    // 0x2409c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2409C4u;
    {
        const bool branch_taken_0x2409c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409c4) {
            ctx->pc = 0x2409E0u;
            goto label_2409e0;
        }
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0x0  nop
    ctx->pc = 0x2409ccu;
    // NOP
    // 0x2409d0: 0x0  nop
    ctx->pc = 0x2409d0u;
    // NOP
    // 0x2409d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2409D4u;
    {
        const bool branch_taken_0x2409d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2409D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409D4u;
        // 0x2409d8: 0xa2000023  sb          $zero, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2409d4) {
            ctx->pc = 0x2409C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2409c4;
        }
    }
    ctx->pc = 0x2409DCu;
label_2409dc:
    // 0x2409dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2409dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2409e0:
    // 0x2409e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2409e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2409e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2409e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2409e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2409e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2409ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2409ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2409f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2409f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2409f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2409F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2409F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409F4u;
        // 0x2409f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2409F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2409FCu;
    // 0x2409fc: 0x0  nop
    ctx->pc = 0x2409fcu;
    // NOP
    ctx->pc = 0x240a00u;
}
