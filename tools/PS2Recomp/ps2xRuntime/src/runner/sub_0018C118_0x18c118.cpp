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

// Function: sub_0018C118
// Address: 0x18c118 - 0x18c1c0
void sub_0018C118_0x18c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C118_0x18c118");
#endif

    switch (ctx->pc) {
        case 0x18c168u: goto label_18c168;
        case 0x18c184u: goto label_18c184;
        case 0x18c1acu: goto label_18c1ac;
        default: break;
    }

    ctx->pc = 0x18c118u;

    // 0x18c118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c11c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18c120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c128: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18c128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18c12c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18c130: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18C130u;
    {
        const bool branch_taken_0x18c130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C130u;
        // 0x18c134: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c130) {
            ctx->pc = 0x18C18Cu;
            goto label_18c18c;
        }
    }
    ctx->pc = 0x18C138u;
    // 0x18c138: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x18c13c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x18c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x18c140: 0x8c454488  lw          $a1, 0x4488($v0)
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4488u));
    // 0x18c144: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x18c144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x18c148: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C148u;
    {
        const bool branch_taken_0x18c148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C148u;
        // 0x18c14c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c148) {
            ctx->pc = 0x18C16Cu;
            goto label_18c16c;
        }
    }
    ctx->pc = 0x18C150u;
    // 0x18c150: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18c154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C154u;
    {
        const bool branch_taken_0x18c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C154u;
        // 0x18c158: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c154) {
            ctx->pc = 0x18C168u;
            goto label_18c168;
        }
    }
    ctx->pc = 0x18C15Cu;
    // 0x18c15c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18c160: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x18C160u;
    SET_GPR_U32(ctx, 31, 0x18C168u);
    ctx->pc = 0x18C164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C160u;
    // 0x18c164: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x18C160u, 0x18C168u)) {
        return;
    }
    ctx->pc = 0x18C168u;
label_18c168:
    // 0x18c168: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_18c16c:
    // 0x18c16c: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x18c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18c170: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    // 0x18c174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18c174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c178: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x18c178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18c17c: 0xc0636ea  jal         func_18DBA8
    ctx->pc = 0x18C17Cu;
    SET_GPR_U32(ctx, 31, 0x18C184u);
    ctx->pc = 0x18C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C17Cu;
    // 0x18c180: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x18C17Cu, 0x18C184u)) {
        return;
    }
    ctx->pc = 0x18C184u;
label_18c184:
    // 0x18c184: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18C184u;
    {
        const bool branch_taken_0x18c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C184u;
        // 0x18c188: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c184) {
            ctx->pc = 0x18C1B4u;
            goto label_18c1b4;
        }
    }
    ctx->pc = 0x18C18Cu;
label_18c18c:
    // 0x18c18c: 0x8c43f898  lw          $v1, -0x768($v0)
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965400)));
    // 0x18c190: 0x54a30008  bnel        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C190u;
    {
        const bool branch_taken_0x18c190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c190) {
            ctx->pc = 0x18C194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C190u;
            // 0x18c194: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C1B4u;
            goto label_18c1b4;
        }
    }
    ctx->pc = 0x18C198u;
    // 0x18c198: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x18c198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18c19c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C19Cu;
        // 0x18c1a0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1B0u;
            goto label_18c1b0;
        }
    }
    ctx->pc = 0x18C1A4u;
    // 0x18c1a4: 0xc06354e  jal         func_18D538
    ctx->pc = 0x18C1A4u;
    SET_GPR_U32(ctx, 31, 0x18C1ACu);
    ctx->pc = 0x18C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C1A4u;
    // 0x18c1a8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x18C1A4u, 0x18C1ACu)) {
        return;
    }
    ctx->pc = 0x18C1ACu;
label_18c1ac:
    // 0x18c1ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x18c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_18c1b0:
    // 0x18c1b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18c1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c1b4:
    // 0x18c1b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C1B8u;
        // 0x18c1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C1C0u;
}
