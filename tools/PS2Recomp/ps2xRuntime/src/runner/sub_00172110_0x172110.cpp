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

// Function: sub_00172110
// Address: 0x172110 - 0x1721b8
void sub_00172110_0x172110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172110_0x172110");
#endif

    switch (ctx->pc) {
        case 0x172110u: goto label_172110;
        case 0x172114u: goto label_172114;
        case 0x172118u: goto label_172118;
        case 0x17211cu: goto label_17211c;
        case 0x172120u: goto label_172120;
        case 0x172124u: goto label_172124;
        case 0x172128u: goto label_172128;
        case 0x17212cu: goto label_17212c;
        case 0x172130u: goto label_172130;
        case 0x172134u: goto label_172134;
        case 0x172138u: goto label_172138;
        case 0x17213cu: goto label_17213c;
        case 0x172140u: goto label_172140;
        case 0x172144u: goto label_172144;
        case 0x172148u: goto label_172148;
        case 0x17214cu: goto label_17214c;
        case 0x172150u: goto label_172150;
        case 0x172154u: goto label_172154;
        case 0x172158u: goto label_172158;
        case 0x17215cu: goto label_17215c;
        case 0x172160u: goto label_172160;
        case 0x172164u: goto label_172164;
        case 0x172168u: goto label_172168;
        case 0x17216cu: goto label_17216c;
        case 0x172170u: goto label_172170;
        case 0x172174u: goto label_172174;
        case 0x172178u: goto label_172178;
        case 0x17217cu: goto label_17217c;
        case 0x172180u: goto label_172180;
        case 0x172184u: goto label_172184;
        case 0x172188u: goto label_172188;
        case 0x17218cu: goto label_17218c;
        case 0x172190u: goto label_172190;
        case 0x172194u: goto label_172194;
        case 0x172198u: goto label_172198;
        case 0x17219cu: goto label_17219c;
        case 0x1721a0u: goto label_1721a0;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721a8u: goto label_1721a8;
        case 0x1721acu: goto label_1721ac;
        case 0x1721b0u: goto label_1721b0;
        case 0x1721b4u: goto label_1721b4;
        default: break;
    }

    ctx->pc = 0x172110u;

label_172110:
    // 0x172110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172114:
    // 0x172114: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x172114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172118:
    // 0x172118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17211c:
    // 0x17211c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172120:
    // 0x172120: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_172124:
    // 0x172124: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_172128:
    if (ctx->pc == 0x172128u) {
        ctx->pc = 0x172128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172124u;
        // 0x172128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17212Cu;
        goto label_17212c;
    }
    ctx->pc = 0x172124u;
    {
        const bool branch_taken_0x172124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172124u;
        // 0x172128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172124) {
            ctx->pc = 0x172164u;
            goto label_172164;
        }
    }
    ctx->pc = 0x17212Cu;
label_17212c:
    // 0x17212c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x17212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_172130:
    // 0x172130: 0x5045000c  beql        $v0, $a1, . + 4 + (0xC << 2)
label_172134:
    if (ctx->pc == 0x172134u) {
        ctx->pc = 0x172134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172130u;
        // 0x172134: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172138u;
        goto label_172138;
    }
    ctx->pc = 0x172130u;
    {
        const bool branch_taken_0x172130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x172130) {
            ctx->pc = 0x172134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172130u;
            // 0x172134: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172164u;
            goto label_172164;
        }
    }
    ctx->pc = 0x172138u;
label_172138:
    // 0x172138: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x172138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_17213c:
    // 0x17213c: 0x0  nop
    ctx->pc = 0x17213cu;
    // NOP
label_172140:
    // 0x172140: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_172144:
    // 0x172144: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x172144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_172148:
    // 0x172148: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17214c:
    if (ctx->pc == 0x17214Cu) {
        ctx->pc = 0x17214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172148u;
        // 0x17214c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172150u;
        goto label_172150;
    }
    ctx->pc = 0x172148u;
    {
        const bool branch_taken_0x172148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172148u;
        // 0x17214c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172148) {
            ctx->pc = 0x172164u;
            goto label_172164;
        }
    }
    ctx->pc = 0x172150u;
label_172150:
    // 0x172150: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x172150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_172154:
    // 0x172154: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_172158:
    // 0x172158: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
label_17215c:
    if (ctx->pc == 0x17215Cu) {
        ctx->pc = 0x17215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172158u;
        // 0x17215c: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172160u;
        goto label_172160;
    }
    ctx->pc = 0x172158u;
    {
        const bool branch_taken_0x172158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x172158) {
            ctx->pc = 0x17215Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172158u;
            // 0x17215c: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172140;
        }
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172164:
    // 0x172164: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_172168:
    if (ctx->pc == 0x172168u) {
        ctx->pc = 0x17216Cu;
        goto label_17216c;
    }
    ctx->pc = 0x172164u;
    {
        const bool branch_taken_0x172164 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x172164) {
            ctx->pc = 0x172190u;
            goto label_172190;
        }
    }
    ctx->pc = 0x17216Cu;
label_17216c:
    // 0x17216c: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
label_172170:
    if (ctx->pc == 0x172170u) {
        ctx->pc = 0x172170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17216Cu;
        // 0x172170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172174u;
        goto label_172174;
    }
    ctx->pc = 0x17216Cu;
    {
        const bool branch_taken_0x17216c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x172170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17216Cu;
        // 0x172170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17216c) {
            ctx->pc = 0x1721B0u;
            goto label_1721b0;
        }
    }
    ctx->pc = 0x172174u;
label_172174:
    // 0x172174: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x172174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_172178:
    // 0x172178: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_17217c:
    // 0x17217c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_172180:
    // 0x172180: 0x60f809  jalr        $v1
label_172184:
    if (ctx->pc == 0x172184u) {
        ctx->pc = 0x172184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172180u;
        // 0x172184: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172188u;
        goto label_172188;
    }
    ctx->pc = 0x172180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x172188u);
        ctx->pc = 0x172184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172180u;
        // 0x172184: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172180u, 0x172188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172188u;
label_172188:
    // 0x172188: 0x10000009  b           . + 4 + (0x9 << 2)
label_17218c:
    if (ctx->pc == 0x17218Cu) {
        ctx->pc = 0x17218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172188u;
        // 0x17218c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172190u;
        goto label_172190;
    }
    ctx->pc = 0x172188u;
    {
        const bool branch_taken_0x172188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172188u;
        // 0x17218c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172188) {
            ctx->pc = 0x1721B0u;
            goto label_1721b0;
        }
    }
    ctx->pc = 0x172190u;
label_172190:
    // 0x172190: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_172194:
    if (ctx->pc == 0x172194u) {
        ctx->pc = 0x172194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172190u;
        // 0x172194: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172198u;
        goto label_172198;
    }
    ctx->pc = 0x172190u;
    {
        const bool branch_taken_0x172190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x172194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172190u;
        // 0x172194: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172190) {
            ctx->pc = 0x1721B0u;
            goto label_1721b0;
        }
    }
    ctx->pc = 0x172198u;
label_172198:
    // 0x172198: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_17219c:
    // 0x17219c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17219cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1721a0:
    // 0x1721a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1721a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1721a4:
    // 0x1721a4: 0x60f809  jalr        $v1
label_1721a8:
    if (ctx->pc == 0x1721A8u) {
        ctx->pc = 0x1721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721A4u;
        // 0x1721a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721ACu;
        goto label_1721ac;
    }
    ctx->pc = 0x1721A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1721ACu);
        ctx->pc = 0x1721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721A4u;
        // 0x1721a8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721A4u, 0x1721ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1721ACu;
label_1721ac:
    // 0x1721ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1721acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1721b0:
    // 0x1721b0: 0x3e00008  jr          $ra
label_1721b4:
    if (ctx->pc == 0x1721B4u) {
        ctx->pc = 0x1721B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721B0u;
        // 0x1721b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1721B8u;
        goto label_fallthrough_0x1721b0;
    }
    ctx->pc = 0x1721B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721B0u;
        // 0x1721b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1721b0:
    ctx->pc = 0x1721B8u;
}
