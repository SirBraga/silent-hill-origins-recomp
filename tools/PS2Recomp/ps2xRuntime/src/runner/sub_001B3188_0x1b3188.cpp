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

// Function: sub_001B3188
// Address: 0x1b3188 - 0x1b3228
void sub_001B3188_0x1b3188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3188_0x1b3188");
#endif

    switch (ctx->pc) {
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31bcu: goto label_1b31bc;
        case 0x1b31c4u: goto label_1b31c4;
        case 0x1b31ccu: goto label_1b31cc;
        default: break;
    }

    ctx->pc = 0x1b3188u;

    // 0x1b3188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b318c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3194: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1B3194u;
    SET_GPR_U32(ctx, 31, 0x1B319Cu);
    ctx->pc = 0x1B3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3194u;
    // 0x1b3198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1B3194u, 0x1B319Cu)) {
        return;
    }
    ctx->pc = 0x1B319Cu;
label_1b319c:
    // 0x1b319c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b319cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b31a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b31a4: 0x2463c1b8  addiu       $v1, $v1, -0x3E48
    ctx->pc = 0x1b31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951352));
    // 0x1b31a8: 0x2442c1d8  addiu       $v0, $v0, -0x3E28
    ctx->pc = 0x1b31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951384));
    // 0x1b31ac: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1b31acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1b31b0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1b31b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1b31b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1B31B4u;
    SET_GPR_U32(ctx, 31, 0x1B31BCu);
    ctx->pc = 0x1B31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31B4u;
    // 0x1b31b8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1B31B4u, 0x1B31BCu)) {
        return;
    }
    ctx->pc = 0x1B31BCu;
label_1b31bc:
    // 0x1b31bc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1B31BCu;
    SET_GPR_U32(ctx, 31, 0x1B31C4u);
    ctx->pc = 0x1B31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31BCu;
    // 0x1b31c0: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1B31BCu, 0x1B31C4u)) {
        return;
    }
    ctx->pc = 0x1B31C4u;
label_1b31c4:
    // 0x1b31c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1B31C4u;
    SET_GPR_U32(ctx, 31, 0x1B31CCu);
    ctx->pc = 0x1B31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31C4u;
    // 0x1b31c8: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1B31C4u, 0x1B31CCu)) {
        return;
    }
    ctx->pc = 0x1B31CCu;
label_1b31cc:
    // 0x1b31cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b31d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b31d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31d4: 0xa2030077  sb          $v1, 0x77($s0)
    ctx->pc = 0x1b31d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 119), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b31d8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1b31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1b31dc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1b31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1b31e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1b31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1b31e4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1b31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1b31e8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1b31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1b31ec: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1b31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1b31f0: 0xa2030074  sb          $v1, 0x74($s0)
    ctx->pc = 0x1b31f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b31f4: 0xa2030075  sb          $v1, 0x75($s0)
    ctx->pc = 0x1b31f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b31f8: 0xa2030076  sb          $v1, 0x76($s0)
    ctx->pc = 0x1b31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b31fc: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1b31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1b3200: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1b3200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1b3204: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1b3204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1b3208: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1b3208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1b320c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1b320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1b3210: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1b3210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1b3214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b321c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B321Cu;
        // 0x1b3220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3224u;
    // 0x1b3224: 0x0  nop
    ctx->pc = 0x1b3224u;
    // NOP
    ctx->pc = 0x1b3228u;
}
