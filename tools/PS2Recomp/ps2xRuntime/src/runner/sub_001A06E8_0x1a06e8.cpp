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

// Function: sub_001A06E8
// Address: 0x1a06e8 - 0x1a0808
void sub_001A06E8_0x1a06e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A06E8_0x1a06e8");
#endif

    switch (ctx->pc) {
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a0784u: goto label_1a0784;
        default: break;
    }

    ctx->pc = 0x1a06e8u;

    // 0x1a06e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a06ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a06ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a06f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a06f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a06f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a06f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a06f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a06fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a0700: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a0700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a0704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a0704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0708: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a0708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a070c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0710: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1a0710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1a0714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0718: 0xc065c40  jal         func_197100
    ctx->pc = 0x1A0718u;
    SET_GPR_U32(ctx, 31, 0x1A0720u);
    ctx->pc = 0x1A071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0718u;
    // 0x1a071c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1A0718u, 0x1A0720u)) {
        return;
    }
    ctx->pc = 0x1A0720u;
label_1a0720:
    // 0x1a0720: 0x8e050804  lw          $a1, 0x804($s0)
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x1a0724: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a0724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0728: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a072c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A072Cu;
    {
        const bool branch_taken_0x1a072c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A072Cu;
        // 0x1a0730: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a072c) {
            ctx->pc = 0x1A07DCu;
            goto label_1a07dc;
        }
    }
    ctx->pc = 0x1A0734u;
    // 0x1a0734: 0x8e020808  lw          $v0, 0x808($s0)
    ctx->pc = 0x1a0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2056)));
label_1a0738:
    // 0x1a0738: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a073c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0740: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0744: 0x56840020  bnel        $s4, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A0744u;
    {
        const bool branch_taken_0x1a0744 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a0744) {
            ctx->pc = 0x1A0748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0744u;
            // 0x1a0748: 0x8e050804  lw          $a1, 0x804($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A07C8u;
            goto label_1a07c8;
        }
    }
    ctx->pc = 0x1A074Cu;
    // 0x1a074c: 0x24120098  addiu       $s2, $zero, 0x98
    ctx->pc = 0x1a074cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0750: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a0754: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x1a0754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0758: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a075c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a0760: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1A0760u;
    SET_GPR_U32(ctx, 31, 0x1A0768u);
    ctx->pc = 0x1A0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0760u;
    // 0x1a0764: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1A0760u, 0x1A0768u)) {
        return;
    }
    ctx->pc = 0x1A0768u;
label_1a0768:
    // 0x1a0768: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A0768u;
    {
        const bool branch_taken_0x1a0768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0768u;
        // 0x1a076c: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0768) {
            ctx->pc = 0x1A07C4u;
            goto label_1a07c4;
        }
    }
    ctx->pc = 0x1A0770u;
    // 0x1a0770: 0xae11080c  sw          $s1, 0x80C($s0)
    ctx->pc = 0x1a0770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 17));
    // 0x1a0774: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x1a0774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x1a0778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a077c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A077Cu, 0x1A0784u)) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x8e05080c  lw          $a1, 0x80C($s0)
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x1a0788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a078c: 0x8e060804  lw          $a2, 0x804($s0)
    ctx->pc = 0x1a078cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x1a0790: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x1a0790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a0794: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a0798: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a079c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a07a0: 0xae040838  sw          $a0, 0x838($s0)
    ctx->pc = 0x1a07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 4));
    // 0x1a07a4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1a07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a07a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a07ac: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1a07acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a07b0: 0xae150834  sw          $s5, 0x834($s0)
    ctx->pc = 0x1a07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 21));
    // 0x1a07b4: 0xae04083c  sw          $a0, 0x83C($s0)
    ctx->pc = 0x1a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 4));
    // 0x1a07b8: 0xae150894  sw          $s5, 0x894($s0)
    ctx->pc = 0x1a07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 21));
    // 0x1a07bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A07BCu;
    {
        const bool branch_taken_0x1a07bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07BCu;
        // 0x1a07c0: 0xae000818  sw          $zero, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07bc) {
            ctx->pc = 0x1A07E0u;
            goto label_1a07e0;
        }
    }
    ctx->pc = 0x1A07C4u;
label_1a07c4:
    // 0x1a07c4: 0x8e050804  lw          $a1, 0x804($s0)
    ctx->pc = 0x1a07c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
label_1a07c8:
    // 0x1a07c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a07c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a07cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a07d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a07d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a07d4: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1A07D4u;
    {
        const bool branch_taken_0x1a07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a07d4) {
            ctx->pc = 0x1A07D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A07D4u;
            // 0x1a07d8: 0x8e020808  lw          $v0, 0x808($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0738;
        }
    }
    ctx->pc = 0x1A07DCu;
label_1a07dc:
    // 0x1a07dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a07dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a07e0:
    // 0x1a07e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a07e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a07e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a07e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a07e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a07e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a07ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a07ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a07f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a07f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a07f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1a07f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a07f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a07f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a07fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A07FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07FCu;
        // 0x1a0800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A07FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0804u;
    // 0x1a0804: 0x0  nop
    ctx->pc = 0x1a0804u;
    // NOP
    ctx->pc = 0x1a0808u;
}
