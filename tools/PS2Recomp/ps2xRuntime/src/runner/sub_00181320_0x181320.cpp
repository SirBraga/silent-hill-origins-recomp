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

// Function: sub_00181320
// Address: 0x181320 - 0x1813c8
void sub_00181320_0x181320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181320_0x181320");
#endif

    switch (ctx->pc) {
        case 0x181390u: goto label_181390;
        case 0x1813a0u: goto label_1813a0;
        case 0x1813a8u: goto label_1813a8;
        default: break;
    }

    ctx->pc = 0x181320u;

    // 0x181320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181324: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x181324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x181328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18132c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18132cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181330: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x181330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x181334: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x181334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18133c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x18133cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181340: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x181340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x181344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x181344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181348: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x181348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x18134c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18134cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181350: 0xae110064  sw          $s1, 0x64($s0)
    ctx->pc = 0x181350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 17));
    // 0x181354: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181358: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x181358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18135c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x18135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x181360: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x181364: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x181364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x181368: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x181368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x18136c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18136cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x181370: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x181370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x181374: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x181374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x181378: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x181378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18137c: 0xae070044  sw          $a3, 0x44($s0)
    ctx->pc = 0x18137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 7));
    // 0x181380: 0xae0a0060  sw          $t2, 0x60($s0)
    ctx->pc = 0x181380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 10));
    // 0x181384: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x181384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x181388: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x181388u;
    SET_GPR_U32(ctx, 31, 0x181390u);
    ctx->pc = 0x18138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181388u;
    // 0x18138c: 0xae080048  sw          $t0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x181388u, 0x181390u)) {
        return;
    }
    ctx->pc = 0x181390u;
label_181390:
    // 0x181390: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x181394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x181394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181398: 0xc06065e  jal         func_181978
    ctx->pc = 0x181398u;
    SET_GPR_U32(ctx, 31, 0x1813A0u);
    ctx->pc = 0x18139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181398u;
    // 0x18139c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181978u, 0x181398u, 0x1813A0u)) {
        return;
    }
    ctx->pc = 0x1813A0u;
label_1813a0:
    // 0x1813a0: 0xc06067e  jal         func_1819F8
    ctx->pc = 0x1813A0u;
    SET_GPR_U32(ctx, 31, 0x1813A8u);
    ctx->pc = 0x1813A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813A0u;
    // 0x1813a4: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1819F8u, 0x1813A0u, 0x1813A8u)) {
        return;
    }
    ctx->pc = 0x1813A8u;
label_1813a8:
    // 0x1813a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1813a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1813ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1813acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1813b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1813b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1813b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1813b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1813b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1813BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813BCu;
        // 0x1813c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1813BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1813C4u;
    // 0x1813c4: 0x0  nop
    ctx->pc = 0x1813c4u;
    // NOP
    ctx->pc = 0x1813c8u;
}
