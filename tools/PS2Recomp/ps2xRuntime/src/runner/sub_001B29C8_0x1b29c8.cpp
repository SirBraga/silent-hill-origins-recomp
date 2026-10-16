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

// Function: sub_001B29C8
// Address: 0x1b29c8 - 0x1b2a78
void sub_001B29C8_0x1b29c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B29C8_0x1b29c8");
#endif

    switch (ctx->pc) {
        case 0x1b2a00u: goto label_1b2a00;
        case 0x1b2a18u: goto label_1b2a18;
        case 0x1b2a38u: goto label_1b2a38;
        case 0x1b2a48u: goto label_1b2a48;
        default: break;
    }

    ctx->pc = 0x1b29c8u;

    // 0x1b29c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b29c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b29cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b29d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b29d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b29d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b29d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b29d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b29dc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B29DCu;
    {
        const bool branch_taken_0x1b29dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29DCu;
        // 0x1b29e0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29dc) {
            ctx->pc = 0x1B2A20u;
            goto label_1b2a20;
        }
    }
    ctx->pc = 0x1B29E4u;
    // 0x1b29e4: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1b29e8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B29E8u;
    {
        const bool branch_taken_0x1b29e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29E8u;
        // 0x1b29ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29e8) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B29F0u;
    // 0x1b29f0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b29f4: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1b29f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x1b29f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1B29F8u;
    SET_GPR_U32(ctx, 31, 0x1B2A00u);
    ctx->pc = 0x1B29FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29F8u;
    // 0x1b29fc: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B29F8u, 0x1B2A00u)) {
        return;
    }
    ctx->pc = 0x1B2A00u;
label_1b2a00:
    // 0x1b2a00: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a08: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1b2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    // 0x1b2a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a10: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1B2A10u;
    SET_GPR_U32(ctx, 31, 0x1B2A18u);
    ctx->pc = 0x1B2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A10u;
    // 0x1b2a14: 0x24077d00  addiu       $a3, $zero, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B2A10u, 0x1B2A18u)) {
        return;
    }
    ctx->pc = 0x1B2A18u;
label_1b2a18:
    // 0x1b2a18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2A18u;
    {
        const bool branch_taken_0x1b2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a18) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B2A20u;
label_1b2a20:
    // 0x1b2a20: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x1b2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1b2a24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2A24u;
    {
        const bool branch_taken_0x1b2a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A24u;
        // 0x1b2a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a24) {
            ctx->pc = 0x1B2A4Cu;
            goto label_1b2a4c;
        }
    }
    ctx->pc = 0x1B2A2Cu;
    // 0x1b2a2c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2a30: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2A30u;
    SET_GPR_U32(ctx, 31, 0x1B2A38u);
    ctx->pc = 0x1B2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A30u;
    // 0x1b2a34: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2A30u, 0x1B2A38u)) {
        return;
    }
    ctx->pc = 0x1B2A38u;
label_1b2a38:
    // 0x1b2a38: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a40: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2A40u;
    SET_GPR_U32(ctx, 31, 0x1B2A48u);
    ctx->pc = 0x1B2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A40u;
    // 0x1b2a44: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2A40u, 0x1B2A48u)) {
        return;
    }
    ctx->pc = 0x1B2A48u;
label_1b2a48:
    // 0x1b2a48: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1b2a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_1b2a4c:
    // 0x1b2a4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b2a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2a58: 0xae110228  sw          $s1, 0x228($s0)
    ctx->pc = 0x1b2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 17));
    // 0x1b2a5c: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x1b2a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x1b2a60: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1b2a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1b2a64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A70u;
        // 0x1b2a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A78u;
}
