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

// Function: sub_001ED0F8
// Address: 0x1ed0f8 - 0x1ed1f8
void sub_001ED0F8_0x1ed0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED0F8_0x1ed0f8");
#endif

    switch (ctx->pc) {
        case 0x1ed144u: goto label_1ed144;
        case 0x1ed164u: goto label_1ed164;
        default: break;
    }

    ctx->pc = 0x1ed0f8u;

    // 0x1ed0f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed0fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed100: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed10c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed110: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed114: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1ED114u;
    {
        const bool branch_taken_0x1ed114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED114u;
        // 0x1ed118: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed114) {
            ctx->pc = 0x1ED1D4u;
            goto label_1ed1d4;
        }
    }
    ctx->pc = 0x1ED11Cu;
    // 0x1ed11c: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1ed11cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1ed120: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed124: 0x8e42e7bc  lw          $v0, -0x1844($s2)
    ctx->pc = 0x1ed124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E7BCu));
    // 0x1ed128: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ed128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed12c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ed12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ed130: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed134: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED134u;
    {
        const bool branch_taken_0x1ed134 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1ED138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED134u;
        // 0x1ed138: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed134) {
            ctx->pc = 0x1ED154u;
            goto label_1ed154;
        }
    }
    ctx->pc = 0x1ED13Cu;
    // 0x1ed13c: 0xc07b0de  jal         func_1EC378
    ctx->pc = 0x1ED13Cu;
    SET_GPR_U32(ctx, 31, 0x1ED144u);
    ctx->pc = 0x1ED140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED13Cu;
    // 0x1ed140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC378u, 0x1ED13Cu, 0x1ED144u)) {
        return;
    }
    ctx->pc = 0x1ED144u;
label_1ed144:
    // 0x1ed144: 0x8e43e7bc  lw          $v1, -0x1844($s2)
    ctx->pc = 0x1ed144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961084)));
    // 0x1ed148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ed148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed14c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ed150: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x1ed150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
label_1ed154:
    // 0x1ed154: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED154u;
    {
        const bool branch_taken_0x1ed154 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED154u;
        // 0x1ed158: 0x8e42e7bc  lw          $v0, -0x1844($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed154) {
            ctx->pc = 0x1ED16Cu;
            goto label_1ed16c;
        }
    }
    ctx->pc = 0x1ED15Cu;
    // 0x1ed15c: 0xc07738e  jal         func_1DCE38
    ctx->pc = 0x1ED15Cu;
    SET_GPR_U32(ctx, 31, 0x1ED164u);
    ctx->pc = 0x1ED160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED15Cu;
    // 0x1ed160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCE38u, 0x1ED15Cu, 0x1ED164u)) {
        return;
    }
    ctx->pc = 0x1ED164u;
label_1ed164:
    // 0x1ed164: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED164u;
    {
        const bool branch_taken_0x1ed164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed164) {
            ctx->pc = 0x1ED198u;
            goto label_1ed198;
        }
    }
    ctx->pc = 0x1ED16Cu;
label_1ed16c:
    // 0x1ed16c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ed16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ed170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed174: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED174u;
    {
        const bool branch_taken_0x1ed174 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1ED178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED174u;
        // 0x1ed178: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed174) {
            ctx->pc = 0x1ED198u;
            goto label_1ed198;
        }
    }
    ctx->pc = 0x1ED17Cu;
    // 0x1ed17c: 0x2442ce30  addiu       $v0, $v0, -0x31D0
    ctx->pc = 0x1ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954544));
    // 0x1ed180: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED180u;
    {
        const bool branch_taken_0x1ed180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED180u;
        // 0x1ed184: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed180) {
            ctx->pc = 0x1ED198u;
            goto label_1ed198;
        }
    }
    ctx->pc = 0x1ED188u;
    // 0x1ed188: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ed188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ed18c: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1ed190: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1ed190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1ed194: 0x0  nop
    ctx->pc = 0x1ed194u;
    // NOP
label_1ed198:
    // 0x1ed198: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED198u;
    {
        const bool branch_taken_0x1ed198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED198u;
        // 0x1ed19c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed198) {
            ctx->pc = 0x1ED1D8u;
            goto label_1ed1d8;
        }
    }
    ctx->pc = 0x1ED1A0u;
    // 0x1ed1a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ed1a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ed1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed1a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ed1ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed1b0: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x1ed1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x1ed1b4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1ed1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ed1b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ed1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ed1bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ed1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ed1c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed1c4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1ed1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1ed1c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ed1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ed1d0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1ed1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1ed1d4:
    // 0x1ed1d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ed1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ed1d8:
    // 0x1ed1d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed1dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ed1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed1e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ed1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1ECu;
        // 0x1ed1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED1F4u;
    // 0x1ed1f4: 0x0  nop
    ctx->pc = 0x1ed1f4u;
    // NOP
    ctx->pc = 0x1ed1f8u;
}
