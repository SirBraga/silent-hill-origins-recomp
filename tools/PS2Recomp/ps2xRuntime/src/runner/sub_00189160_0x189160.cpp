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

// Function: sub_00189160
// Address: 0x189160 - 0x189208
void sub_00189160_0x189160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189160_0x189160");
#endif

    switch (ctx->pc) {
        case 0x189178u: goto label_189178;
        case 0x189184u: goto label_189184;
        case 0x1891b0u: goto label_1891b0;
        case 0x1891b8u: goto label_1891b8;
        case 0x1891c0u: goto label_1891c0;
        default: break;
    }

    ctx->pc = 0x189160u;

    // 0x189160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189164: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x189164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x189168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18916c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189170: 0xc0620c8  jal         func_188320
    ctx->pc = 0x189170u;
    SET_GPR_U32(ctx, 31, 0x189178u);
    ctx->pc = 0x189174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189170u;
    // 0x189174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188320u, 0x189170u, 0x189178u)) {
        return;
    }
    ctx->pc = 0x189178u;
label_189178:
    // 0x189178: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x189178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x18917c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x18917Cu;
    SET_GPR_U32(ctx, 31, 0x189184u);
    ctx->pc = 0x189180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18917Cu;
    // 0x189180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x18917Cu, 0x189184u)) {
        return;
    }
    ctx->pc = 0x189184u;
label_189184:
    // 0x189184: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x189188: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x189188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18918c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x18918cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x189190: 0x24638ba0  addiu       $v1, $v1, -0x7460
    ctx->pc = 0x189190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937504));
    // 0x189194: 0x24a58c08  addiu       $a1, $a1, -0x73F8
    ctx->pc = 0x189194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937608));
    // 0x189198: 0x24428bc0  addiu       $v0, $v0, -0x7440
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x18919c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x18919cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1891a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x1891a4: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1891a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1891a8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1891A8u;
    SET_GPR_U32(ctx, 31, 0x1891B0u);
    ctx->pc = 0x1891ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891A8u;
    // 0x1891ac: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1891A8u, 0x1891B0u)) {
        return;
    }
    ctx->pc = 0x1891B0u;
label_1891b0:
    // 0x1891b0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1891B0u;
    SET_GPR_U32(ctx, 31, 0x1891B8u);
    ctx->pc = 0x1891B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891B0u;
    // 0x1891b4: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1891B0u, 0x1891B8u)) {
        return;
    }
    ctx->pc = 0x1891B8u;
label_1891b8:
    // 0x1891b8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1891B8u;
    SET_GPR_U32(ctx, 31, 0x1891C0u);
    ctx->pc = 0x1891BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1891B8u;
    // 0x1891bc: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1891B8u, 0x1891C0u)) {
        return;
    }
    ctx->pc = 0x1891C0u;
label_1891c0:
    // 0x1891c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1891c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1891c4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1891c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1891c8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1891c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1891cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1891ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1891d0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1891d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1891d4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x1891d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x1891d8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1891d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1891dc: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1891dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1891e0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1891e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x1891e4: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1891e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1891e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1891e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1891ec: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1891f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1891f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1891f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1891f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1891f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1891f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1891fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1891fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189200: 0x3e00008  jr          $ra
    ctx->pc = 0x189200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189200u;
        // 0x189204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189208u;
}
