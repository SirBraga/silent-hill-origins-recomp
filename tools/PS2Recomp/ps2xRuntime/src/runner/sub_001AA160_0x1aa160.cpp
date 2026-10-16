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

// Function: sub_001AA160
// Address: 0x1aa160 - 0x1aa240
void sub_001AA160_0x1aa160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA160_0x1aa160");
#endif

    switch (ctx->pc) {
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        case 0x1aa238u: goto label_1aa238;
        case 0x1aa23cu: goto label_1aa23c;
        default: break;
    }

    ctx->pc = 0x1aa160u;

label_1aa160:
    // 0x1aa160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aa160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1aa164:
    // 0x1aa164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aa164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1aa168:
    // 0x1aa168: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aa168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1aa16c:
    // 0x1aa16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa170:
    // 0x1aa170: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aa170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1aa174:
    // 0x1aa174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa178:
    // 0x1aa178: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1aa17c:
    // 0x1aa17c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1aa180:
    if (ctx->pc == 0x1AA180u) {
        ctx->pc = 0x1AA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA17Cu;
        // 0x1aa180: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA184u;
        goto label_1aa184;
    }
    ctx->pc = 0x1AA17Cu;
    {
        const bool branch_taken_0x1aa17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA17Cu;
        // 0x1aa180: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa17c) {
            ctx->pc = 0x1AA228u;
            goto label_1aa228;
        }
    }
    ctx->pc = 0x1AA184u;
label_1aa184:
    // 0x1aa184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa188:
    // 0x1aa188: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1aa188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa18c:
    // 0x1aa18c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1aa190:
    // 0x1aa190: 0x52020026  beql        $s0, $v0, . + 4 + (0x26 << 2)
label_1aa194:
    if (ctx->pc == 0x1AA194u) {
        ctx->pc = 0x1AA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA190u;
        // 0x1aa194: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA198u;
        goto label_1aa198;
    }
    ctx->pc = 0x1AA190u;
    {
        const bool branch_taken_0x1aa190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa190) {
            ctx->pc = 0x1AA194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA190u;
            // 0x1aa194: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA22Cu;
            goto label_1aa22c;
        }
    }
    ctx->pc = 0x1AA198u;
label_1aa198:
    // 0x1aa198: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa19c:
    // 0x1aa19c: 0x0  nop
    ctx->pc = 0x1aa19cu;
    // NOP
label_1aa1a0:
    // 0x1aa1a0: 0x5452001c  bnel        $v0, $s2, . + 4 + (0x1C << 2)
label_1aa1a4:
    if (ctx->pc == 0x1AA1A4u) {
        ctx->pc = 0x1AA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1A0u;
        // 0x1aa1a4: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1A8u;
        goto label_1aa1a8;
    }
    ctx->pc = 0x1AA1A0u;
    {
        const bool branch_taken_0x1aa1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1aa1a0) {
            ctx->pc = 0x1AA1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1A0u;
            // 0x1aa1a4: 0x8e2200c8  lw          $v0, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA214u;
            goto label_1aa214;
        }
    }
    ctx->pc = 0x1AA1A8u;
label_1aa1a8:
    // 0x1aa1a8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1aa1ac:
    // 0x1aa1ac: 0xc06a5f6  jal         func_1A97D8
label_1aa1b0:
    if (ctx->pc == 0x1AA1B0u) {
        ctx->pc = 0x1AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1ACu;
        // 0x1aa1b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1B4u;
        goto label_1aa1b4;
    }
    ctx->pc = 0x1AA1ACu;
    SET_GPR_U32(ctx, 31, 0x1AA1B4u);
    ctx->pc = 0x1AA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1ACu;
    // 0x1aa1b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A97D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A97D8u, 0x1AA1ACu, 0x1AA1B4u)) {
        return;
    }
    ctx->pc = 0x1AA1B4u;
label_1aa1b4:
    // 0x1aa1b4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1aa1b8:
    // 0x1aa1b8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1aa1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1aa1bc:
    // 0x1aa1bc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1aa1c0:
    // 0x1aa1c0: 0x60f809  jalr        $v1
label_1aa1c4:
    if (ctx->pc == 0x1AA1C4u) {
        ctx->pc = 0x1AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C0u;
        // 0x1aa1c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1C8u;
        goto label_1aa1c8;
    }
    ctx->pc = 0x1AA1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA1C8u);
        ctx->pc = 0x1AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C0u;
        // 0x1aa1c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA1C0u, 0x1AA1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA1C8u;
label_1aa1c8:
    // 0x1aa1c8: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1aa1cc:
    // 0x1aa1cc: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1aa1d0:
    // 0x1aa1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa1d4:
    // 0x1aa1d4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa1d8:
    // 0x1aa1d8: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
label_1aa1dc:
    if (ctx->pc == 0x1AA1DCu) {
        ctx->pc = 0x1AA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D8u;
        // 0x1aa1dc: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1E0u;
        goto label_1aa1e0;
    }
    ctx->pc = 0x1AA1D8u;
    {
        const bool branch_taken_0x1aa1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1aa1d8) {
            ctx->pc = 0x1AA1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1D8u;
            // 0x1aa1dc: 0xac60fffc  sw          $zero, -0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA204u;
            goto label_1aa204;
        }
    }
    ctx->pc = 0x1AA1E0u;
label_1aa1e0:
    // 0x1aa1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aa1e4:
    // 0x1aa1e4: 0x0  nop
    ctx->pc = 0x1aa1e4u;
    // NOP
label_1aa1e8:
    // 0x1aa1e8: 0xac62fffc  sw          $v0, -0x4($v1)
    ctx->pc = 0x1aa1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
label_1aa1ec:
    // 0x1aa1ec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1aa1f0:
    // 0x1aa1f0: 0x0  nop
    ctx->pc = 0x1aa1f0u;
    // NOP
label_1aa1f4:
    // 0x1aa1f4: 0x0  nop
    ctx->pc = 0x1aa1f4u;
    // NOP
label_1aa1f8:
    // 0x1aa1f8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_1aa1fc:
    if (ctx->pc == 0x1AA1FCu) {
        ctx->pc = 0x1AA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F8u;
        // 0x1aa1fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA200u;
        goto label_1aa200;
    }
    ctx->pc = 0x1AA1F8u;
    {
        const bool branch_taken_0x1aa1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1aa1f8) {
            ctx->pc = 0x1AA1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1F8u;
            // 0x1aa1fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa1e8;
        }
    }
    ctx->pc = 0x1AA200u;
label_1aa200:
    // 0x1aa200: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x1aa200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_1aa204:
    // 0x1aa204: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1aa208:
    // 0x1aa208: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa20c:
    // 0x1aa20c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa210:
    if (ctx->pc == 0x1AA210u) {
        ctx->pc = 0x1AA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA20Cu;
        // 0x1aa210: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA214u;
        goto label_1aa214;
    }
    ctx->pc = 0x1AA20Cu;
    {
        const bool branch_taken_0x1aa20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA20Cu;
        // 0x1aa210: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa20c) {
            ctx->pc = 0x1AA228u;
            goto label_1aa228;
        }
    }
    ctx->pc = 0x1AA214u;
label_1aa214:
    // 0x1aa214: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1aa214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1aa218:
    // 0x1aa218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa21c:
    // 0x1aa21c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa220:
    // 0x1aa220: 0x5602ffdf  bnel        $s0, $v0, . + 4 + (-0x21 << 2)
label_1aa224:
    if (ctx->pc == 0x1AA224u) {
        ctx->pc = 0x1AA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA220u;
        // 0x1aa224: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA228u;
        goto label_1aa228;
    }
    ctx->pc = 0x1AA220u;
    {
        const bool branch_taken_0x1aa220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa220) {
            ctx->pc = 0x1AA224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA220u;
            // 0x1aa224: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa1a0;
        }
    }
    ctx->pc = 0x1AA228u;
label_1aa228:
    // 0x1aa228: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aa228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa22c:
    // 0x1aa22c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aa22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa230:
    // 0x1aa230: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aa230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa234:
    // 0x1aa234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa238:
    // 0x1aa238: 0x3e00008  jr          $ra
label_1aa23c:
    if (ctx->pc == 0x1AA23Cu) {
        ctx->pc = 0x1AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA238u;
        // 0x1aa23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA240u;
        goto label_fallthrough_0x1aa238;
    }
    ctx->pc = 0x1AA238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA238u;
        // 0x1aa23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa238:
    ctx->pc = 0x1AA240u;
}
