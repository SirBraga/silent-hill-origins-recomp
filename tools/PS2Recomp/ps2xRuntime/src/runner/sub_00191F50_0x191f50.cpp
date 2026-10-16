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

// Function: sub_00191F50
// Address: 0x191f50 - 0x192030
void sub_00191F50_0x191f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191F50_0x191f50");
#endif

    switch (ctx->pc) {
        case 0x191f6cu: goto label_191f6c;
        case 0x191fc0u: goto label_191fc0;
        case 0x192000u: goto label_192000;
        case 0x192018u: goto label_192018;
        default: break;
    }

    ctx->pc = 0x191f50u;

    // 0x191f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x191f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x191f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191f64: 0xc062458  jal         func_189160
    ctx->pc = 0x191F64u;
    SET_GPR_U32(ctx, 31, 0x191F6Cu);
    ctx->pc = 0x191F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F64u;
    // 0x191f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189160u, 0x191F64u, 0x191F6Cu)) {
        return;
    }
    ctx->pc = 0x191F6Cu;
label_191f6c:
    // 0x191f6c: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x191f70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x191f74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x191f78: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x191f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x191f7c: 0x24639608  addiu       $v1, $v1, -0x69F8
    ctx->pc = 0x191f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940168));
    // 0x191f80: 0x24a59650  addiu       $a1, $a1, -0x69B0
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940240));
    // 0x191f84: 0x244295e8  addiu       $v0, $v0, -0x6A18
    ctx->pc = 0x191f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940136));
    // 0x191f88: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x191f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x191f8c: 0x260400e4  addiu       $a0, $s0, 0xE4
    ctx->pc = 0x191f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x191f90: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x191f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x191f94: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x191f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x191f98: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x191f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x191f9c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x191f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x191fa0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x191fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x191fa4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x191fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x191fa8: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x191fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x191fac: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x191facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x191fb0: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x191fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x191fb4: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x191fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x191fb8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x191FB8u;
    SET_GPR_U32(ctx, 31, 0x191FC0u);
    ctx->pc = 0x191FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FB8u;
    // 0x191fbc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x191FB8u, 0x191FC0u)) {
        return;
    }
    ctx->pc = 0x191FC0u;
label_191fc0:
    // 0x191fc0: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x191fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x191fc4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x191fc8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x191fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x191fcc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x191fd0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x191fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x191fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fd8: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x191fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x191fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fe0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x191fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x191fe4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x191fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x191fe8: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x191fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x191fec: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x191fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x191ff0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x191ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x191ff4: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x191ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x191ff8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x191FF8u;
    SET_GPR_U32(ctx, 31, 0x192000u);
    ctx->pc = 0x191FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FF8u;
    // 0x191ffc: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x191FF8u, 0x192000u)) {
        return;
    }
    ctx->pc = 0x192000u;
label_192000:
    // 0x192000: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x192004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192008: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x19200c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19200cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192010: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x192010u;
    SET_GPR_U32(ctx, 31, 0x192018u);
    ctx->pc = 0x192014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192010u;
    // 0x192014: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x192010u, 0x192018u)) {
        return;
    }
    ctx->pc = 0x192018u;
label_192018:
    // 0x192018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19201c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19201cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192020: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192028: 0x3e00008  jr          $ra
    ctx->pc = 0x192028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192028u;
        // 0x19202c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192030u;
}
