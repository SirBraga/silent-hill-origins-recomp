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

// Function: sub_0019A1F0
// Address: 0x19a1f0 - 0x19a2c0
void sub_0019A1F0_0x19a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A1F0_0x19a1f0");
#endif

    switch (ctx->pc) {
        case 0x19a270u: goto label_19a270;
        case 0x19a2b4u: goto label_19a2b4;
        default: break;
    }

    ctx->pc = 0x19a1f0u;

    // 0x19a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a1f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a1fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a200: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x19a204: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A204u;
    {
        const bool branch_taken_0x19a204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a204) {
            ctx->pc = 0x19A208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A204u;
            // 0x19a208: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A21Cu;
            goto label_19a21c;
        }
    }
    ctx->pc = 0x19A20Cu;
    // 0x19a20c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19a210: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a214: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19A214u;
    {
        const bool branch_taken_0x19a214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A214u;
        // 0x19a218: 0x8c458110  lw          $a1, -0x7EF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a214) {
            ctx->pc = 0x19A248u;
            goto label_19a248;
        }
    }
    ctx->pc = 0x19A21Cu;
label_19a21c:
    // 0x19a21c: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A21Cu;
    {
        const bool branch_taken_0x19a21c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a21c) {
            ctx->pc = 0x19A220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A21Cu;
            // 0x19a220: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A234u;
            goto label_19a234;
        }
    }
    ctx->pc = 0x19A224u;
    // 0x19a224: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19a228: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a22c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A22Cu;
    {
        const bool branch_taken_0x19a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A22Cu;
        // 0x19a230: 0x8c458118  lw          $a1, -0x7EE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a22c) {
            ctx->pc = 0x19A248u;
            goto label_19a248;
        }
    }
    ctx->pc = 0x19A234u;
label_19a234:
    // 0x19a234: 0x54a20010  bnel        $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A234u;
    {
        const bool branch_taken_0x19a234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a234) {
            ctx->pc = 0x19A238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A234u;
            // 0x19a238: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A278u;
            goto label_19a278;
        }
    }
    ctx->pc = 0x19A23Cu;
    // 0x19a23c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19a240: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a244: 0x8c458128  lw          $a1, -0x7ED8($v0)
    ctx->pc = 0x19a244u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F8128u));
label_19a248:
    // 0x19a248: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x19a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x19a24c: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x19a250: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19a250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19a254: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19A254u;
    {
        const bool branch_taken_0x19a254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A254u;
        // 0x19a258: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a254) {
            ctx->pc = 0x19A2B4u;
            goto label_19a2b4;
        }
    }
    ctx->pc = 0x19A25Cu;
    // 0x19a25c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a260: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A260u;
    {
        const bool branch_taken_0x19a260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A260u;
        // 0x19a264: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a260) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A268u;
    // 0x19a268: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19A268u;
    SET_GPR_U32(ctx, 31, 0x19A270u);
    ctx->pc = 0x19A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A268u;
    // 0x19a26c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19A268u, 0x19A270u)) {
        return;
    }
    ctx->pc = 0x19A270u;
label_19a270:
    // 0x19a270: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19A270u;
    {
        const bool branch_taken_0x19a270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A270u;
        // 0x19a274: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a270) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A278u;
label_19a278:
    // 0x19a278: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19A278u;
    {
        const bool branch_taken_0x19a278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A278u;
        // 0x19a27c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a278) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A280u;
    // 0x19a280: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19a284: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a288: 0x8c458120  lw          $a1, -0x7EE0($v0)
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F8120u));
    // 0x19a28c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x19a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x19a290: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x19a294: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x19a294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x19a298: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A298u;
    {
        const bool branch_taken_0x19a298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A298u;
        // 0x19a29c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a298) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A2A0u;
    // 0x19a2a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a2a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A2A4u;
    {
        const bool branch_taken_0x19a2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2a4) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A2ACu;
    // 0x19a2ac: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19A2ACu;
    SET_GPR_U32(ctx, 31, 0x19A2B4u);
    ctx->pc = 0x19A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A2ACu;
    // 0x19a2b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19A2ACu, 0x19A2B4u)) {
        return;
    }
    ctx->pc = 0x19A2B4u;
label_19a2b4:
    // 0x19a2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a2b8:
    // 0x19a2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2B8u;
        // 0x19a2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A2C0u;
}
