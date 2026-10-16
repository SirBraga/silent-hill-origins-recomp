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

// Function: sub_001CC080
// Address: 0x1cc080 - 0x1cc198
void sub_001CC080_0x1cc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC080_0x1cc080");
#endif

    switch (ctx->pc) {
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc17cu: goto label_1cc17c;
        default: break;
    }

    ctx->pc = 0x1cc080u;

    // 0x1cc080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cc084: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cc088: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cc088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cc08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc090: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cc090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cc094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc098: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1cc09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc0a4: 0x26320274  addiu       $s2, $s1, 0x274
    ctx->pc = 0x1cc0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 628));
    // 0x1cc0a8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cc0ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cc0b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc0b4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1cc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1cc0b8: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC0B8u;
    SET_GPR_U32(ctx, 31, 0x1CC0C0u);
    ctx->pc = 0x1CC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC0B8u;
    // 0x1cc0bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC0B8u, 0x1CC0C0u)) {
        return;
    }
    ctx->pc = 0x1CC0C0u;
label_1cc0c0:
    // 0x1cc0c0: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cc0c4: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1cc0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cc0c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC0C8u;
    {
        const bool branch_taken_0x1cc0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0C8u;
        // 0x1cc0cc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0c8) {
            ctx->pc = 0x1CC124u;
            goto label_1cc124;
        }
    }
    ctx->pc = 0x1CC0D0u;
    // 0x1cc0d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cc0d4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1cc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cc0d8: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1cc0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cc0dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc0e0: 0x2484021  addu        $t0, $s2, $t0
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1cc0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0e8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc0ec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1cc0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cc0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cc0f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cc0fc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1cc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1cc100: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC100u;
    SET_GPR_U32(ctx, 31, 0x1CC108u);
    ctx->pc = 0x1CC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC100u;
    // 0x1cc104: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC100u, 0x1CC108u)) {
        return;
    }
    ctx->pc = 0x1CC108u;
label_1cc108:
    // 0x1cc108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc110: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc114: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC114u;
    SET_GPR_U32(ctx, 31, 0x1CC11Cu);
    ctx->pc = 0x1CC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC114u;
    // 0x1cc118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC114u, 0x1CC11Cu)) {
        return;
    }
    ctx->pc = 0x1CC11Cu;
label_1cc11c:
    // 0x1cc11c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC11Cu;
    {
        const bool branch_taken_0x1cc11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC11Cu;
        // 0x1cc120: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc11c) {
            ctx->pc = 0x1CC180u;
            goto label_1cc180;
        }
    }
    ctx->pc = 0x1CC124u;
label_1cc124:
    // 0x1cc124: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC124u;
    {
        const bool branch_taken_0x1cc124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC124u;
        // 0x1cc128: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc124) {
            ctx->pc = 0x1CC154u;
            goto label_1cc154;
        }
    }
    ctx->pc = 0x1CC12Cu;
    // 0x1cc12c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cc130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc138: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cc138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc13c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1cc140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc144: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC144u;
    SET_GPR_U32(ctx, 31, 0x1CC14Cu);
    ctx->pc = 0x1CC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC144u;
    // 0x1cc148: 0xae220278  sw          $v0, 0x278($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC144u, 0x1CC14Cu)) {
        return;
    }
    ctx->pc = 0x1CC14Cu;
label_1cc14c:
    // 0x1cc14c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC14Cu;
    {
        const bool branch_taken_0x1cc14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC14Cu;
        // 0x1cc150: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc14c) {
            ctx->pc = 0x1CC180u;
            goto label_1cc180;
        }
    }
    ctx->pc = 0x1CC154u;
label_1cc154:
    // 0x1cc154: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC154u;
    {
        const bool branch_taken_0x1cc154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC154u;
        // 0x1cc158: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc154) {
            ctx->pc = 0x1CC180u;
            goto label_1cc180;
        }
    }
    ctx->pc = 0x1CC15Cu;
    // 0x1cc15c: 0x8e220280  lw          $v0, 0x280($s1)
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x1cc160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc164: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc168: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cc16c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1cc170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc174: 0xc073066  jal         func_1CC198
    ctx->pc = 0x1CC174u;
    SET_GPR_U32(ctx, 31, 0x1CC17Cu);
    ctx->pc = 0x1CC178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC174u;
    // 0x1cc178: 0xae220280  sw          $v0, 0x280($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC198u, 0x1CC174u, 0x1CC17Cu)) {
        return;
    }
    ctx->pc = 0x1CC17Cu;
label_1cc17c:
    // 0x1cc17c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cc17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc180:
    // 0x1cc180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cc180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc184: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cc184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC18Cu;
        // 0x1cc190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC194u;
    // 0x1cc194: 0x0  nop
    ctx->pc = 0x1cc194u;
    // NOP
    ctx->pc = 0x1cc198u;
}
