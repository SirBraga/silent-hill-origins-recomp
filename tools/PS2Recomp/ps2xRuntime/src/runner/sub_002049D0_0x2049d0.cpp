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

// Function: sub_002049D0
// Address: 0x2049d0 - 0x204ad0
void sub_002049D0_0x2049d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002049D0_0x2049d0");
#endif

    switch (ctx->pc) {
        case 0x2049f8u: goto label_2049f8;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a78u: goto label_204a78;
        default: break;
    }

    ctx->pc = 0x2049d0u;

    // 0x2049d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2049d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2049d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2049d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2049d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2049dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2049dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2049e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2049e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2049e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2049e8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2049e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2049ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2049ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2049f0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x2049F0u;
    SET_GPR_U32(ctx, 31, 0x2049F8u);
    ctx->pc = 0x2049F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049F0u;
    // 0x2049f4: 0x3c120070  lui         $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x2049F0u, 0x2049F8u)) {
        return;
    }
    ctx->pc = 0x2049F8u;
label_2049f8:
    // 0x2049f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2049f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x204a00: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x204a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x204a04: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x204a08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x204a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x204a0c: 0x24636a48  addiu       $v1, $v1, 0x6A48
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27208));
    // 0x204a10: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x204a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x204a14: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x204a18: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x204a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x204a1c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x204a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x204a20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x204a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x204a24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x204a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x204a28: 0x8cc32cf0  lw          $v1, 0x2CF0($a2)
    ctx->pc = 0x204a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x702CF0u));
    // 0x204a2c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x204a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x204a30: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x204a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x204a34: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x204A34u;
    {
        const bool branch_taken_0x204a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A34u;
        // 0x204a38: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a34) {
            ctx->pc = 0x204A6Cu;
            goto label_204a6c;
        }
    }
    ctx->pc = 0x204A3Cu;
    // 0x204a3c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x204a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204a44: 0x26452ce0  addiu       $a1, $s2, 0x2CE0
    ctx->pc = 0x204a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    // 0x204a48: 0xacc32cf0  sw          $v1, 0x2CF0($a2)
    ctx->pc = 0x204a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11504), GPR_U32(ctx, 3));
    // 0x204a4c: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x204a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x204a50: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x204a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x204a54: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x204a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x204a58: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x204a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x204a5c: 0xae402ce0  sw          $zero, 0x2CE0($s2)
    ctx->pc = 0x204a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11488), GPR_U32(ctx, 0));
    // 0x204a60: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x204a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x204a64: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x204A64u;
    SET_GPR_U32(ctx, 31, 0x204A6Cu);
    ctx->pc = 0x204A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A64u;
    // 0x204a68: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x204A64u, 0x204A6Cu)) {
        return;
    }
    ctx->pc = 0x204A6Cu;
label_204a6c:
    // 0x204a6c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x204a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x204a70: 0xc080858  jal         func_202160
    ctx->pc = 0x204A70u;
    SET_GPR_U32(ctx, 31, 0x204A78u);
    ctx->pc = 0x204A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A70u;
    // 0x204a74: 0x26502ce0  addiu       $s0, $s2, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x204A70u, 0x204A78u)) {
        return;
    }
    ctx->pc = 0x204A78u;
label_204a78:
    // 0x204a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a7c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x204a80: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x204a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x204a84: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x204a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x204a88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204A88u;
    {
        const bool branch_taken_0x204a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A88u;
        // 0x204a8c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a88) {
            ctx->pc = 0x204A94u;
            goto label_204a94;
        }
    }
    ctx->pc = 0x204A90u;
    // 0x204a90: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x204a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_204a94:
    // 0x204a94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x204a98: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x204A98u;
    {
        const bool branch_taken_0x204a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204a98) {
            ctx->pc = 0x204A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204A98u;
            // 0x204a9c: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204AA0u;
            goto label_204aa0;
        }
    }
    ctx->pc = 0x204AA0u;
label_204aa0:
    // 0x204aa0: 0x8e432ce0  lw          $v1, 0x2CE0($s2)
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11488)));
    // 0x204aa4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x204aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204aa8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x204aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x204aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204ab0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x204ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204ab4: 0xae432ce0  sw          $v1, 0x2CE0($s2)
    ctx->pc = 0x204ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11488), GPR_U32(ctx, 3));
    // 0x204ab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204abc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x204abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x204AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AC4u;
        // 0x204ac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204ACCu;
    // 0x204acc: 0x0  nop
    ctx->pc = 0x204accu;
    // NOP
    ctx->pc = 0x204ad0u;
}
