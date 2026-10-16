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

// Function: sub_00270748
// Address: 0x270748 - 0x270880
void sub_00270748_0x270748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270748_0x270748");
#endif

    switch (ctx->pc) {
        case 0x2707c8u: goto label_2707c8;
        case 0x270830u: goto label_270830;
        default: break;
    }

    ctx->pc = 0x270748u;

    // 0x270748: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x270748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27074c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270750: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x270750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x270754: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x270754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x270758: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270758u;
    {
        const bool branch_taken_0x270758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270758) {
            ctx->pc = 0x270770u;
            goto label_270770;
        }
    }
    ctx->pc = 0x270760u;
    // 0x270760: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x270760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x270764: 0x3e00008  jr          $ra
    ctx->pc = 0x270764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270764u;
        // 0x270768: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27076Cu;
    // 0x27076c: 0x0  nop
    ctx->pc = 0x27076cu;
    // NOP
label_270770:
    // 0x270770: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x270770u;
    {
        const bool branch_taken_0x270770 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x270774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270770u;
        // 0x270774: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270770) {
            ctx->pc = 0x2707ACu;
            goto label_2707ac;
        }
    }
    ctx->pc = 0x270778u;
    // 0x270778: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x270778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x27077c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x270780: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x270780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x270784: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270784u;
    {
        const bool branch_taken_0x270784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270784u;
        // 0x270788: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270784) {
            ctx->pc = 0x2707A4u;
            goto label_2707a4;
        }
    }
    ctx->pc = 0x27078Cu;
    // 0x27078c: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27078Cu;
    {
        const bool branch_taken_0x27078c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x27078c) {
            ctx->pc = 0x2707ACu;
            goto label_2707ac;
        }
    }
    ctx->pc = 0x270794u;
    // 0x270794: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x270794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x270798: 0x0  nop
    ctx->pc = 0x270798u;
    // NOP
    // 0x27079c: 0x0  nop
    ctx->pc = 0x27079cu;
    // NOP
    // 0x2707a0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x2707a0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[0]);
label_2707a4:
    // 0x2707a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2707A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2707A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2707ACu;
label_2707ac:
    // 0x2707ac: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2707ACu;
    {
        const bool branch_taken_0x2707ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707ACu;
        // 0x2707b0: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707ac) {
            ctx->pc = 0x2707F8u;
            goto label_2707f8;
        }
    }
    ctx->pc = 0x2707B4u;
    // 0x2707b4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2707b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2707b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2707b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2707bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2707BCu;
    {
        const bool branch_taken_0x2707bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707BCu;
        // 0x2707c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707bc) {
            ctx->pc = 0x2707ECu;
            goto label_2707ec;
        }
    }
    ctx->pc = 0x2707C4u;
    // 0x2707c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2707c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2707c8:
    // 0x2707c8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2707c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2707cc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2707ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2707d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2707d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2707d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2707d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2707d8: 0x0  nop
    ctx->pc = 0x2707d8u;
    // NOP
    // 0x2707dc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2707DCu;
    {
        const bool branch_taken_0x2707dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2707dc) {
            ctx->pc = 0x2707C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2707c8;
        }
    }
    ctx->pc = 0x2707E4u;
    // 0x2707e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E4u;
        // 0x2707e8: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x2707F4u;
            goto label_2707f4;
        }
    }
    ctx->pc = 0x2707ECu;
label_2707ec:
    // 0x2707ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2707f0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2707f4:
    // 0x2707f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2707f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_2707f8:
    // 0x2707f8: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x2707f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x2707fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2707fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x270800: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x270800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x270804: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x270804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x270808: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x27080c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x27080cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x270810: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x270810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x270814: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x270814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x270818: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x27081c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x27081cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x270820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x270820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x270824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270828: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x270828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x27082c: 0x0  nop
    ctx->pc = 0x27082cu;
    // NOP
label_270830:
    // 0x270830: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x270830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x270834: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x270834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270838: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x270838u;
    {
        const bool branch_taken_0x270838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270838) {
            ctx->pc = 0x27083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270838u;
            // 0x27083c: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270850u;
            goto label_270850;
        }
    }
    ctx->pc = 0x270840u;
    // 0x270840: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x270844: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x270848: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x270848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27084c: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x27084cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_270850:
    // 0x270850: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x270850u;
    {
        const bool branch_taken_0x270850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270850u;
        // 0x270854: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270850) {
            ctx->pc = 0x270830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270830;
        }
    }
    ctx->pc = 0x270858u;
    // 0x270858: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x270858u;
    {
        const bool branch_taken_0x270858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270858u;
        // 0x27085c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270858) {
            ctx->pc = 0x270864u;
            goto label_270864;
        }
    }
    ctx->pc = 0x270860u;
    // 0x270860: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_270864:
    // 0x270864: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x270868: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x270868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x27086c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x27086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x270870: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x270870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x270874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270878: 0x3e00008  jr          $ra
    ctx->pc = 0x270878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270880u;
}
