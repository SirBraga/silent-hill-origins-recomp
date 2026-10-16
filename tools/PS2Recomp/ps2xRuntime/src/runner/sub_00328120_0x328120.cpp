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

// Function: sub_00328120
// Address: 0x328120 - 0x328180
void sub_00328120_0x328120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328120_0x328120");
#endif

    switch (ctx->pc) {
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        case 0x328164u: goto label_328164;
        case 0x328168u: goto label_328168;
        case 0x32816cu: goto label_32816c;
        case 0x328170u: goto label_328170;
        case 0x328174u: goto label_328174;
        case 0x328178u: goto label_328178;
        case 0x32817cu: goto label_32817c;
        default: break;
    }

    ctx->pc = 0x328120u;

label_328120:
    // 0x328120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_328124:
    // 0x328124: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x328124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_328128:
    // 0x328128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32812c:
    // 0x32812c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x32812cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_328130:
    // 0x328130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_328134:
    // 0x328134: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_328138:
    // 0x328138: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x328138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_32813c:
    // 0x32813c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328140:
    // 0x328140: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_328144:
    // 0x328144: 0x40f809  jalr        $v0
label_328148:
    if (ctx->pc == 0x328148u) {
        ctx->pc = 0x328148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328144u;
        // 0x328148: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32814Cu;
        goto label_32814c;
    }
    ctx->pc = 0x328144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32814Cu);
        ctx->pc = 0x328148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328144u;
        // 0x328148: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328144u, 0x32814Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32814Cu;
label_32814c:
    // 0x32814c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_328150:
    if (ctx->pc == 0x328150u) {
        ctx->pc = 0x328150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32814Cu;
        // 0x328150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328154u;
        goto label_328154;
    }
    ctx->pc = 0x32814Cu;
    {
        const bool branch_taken_0x32814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32814Cu;
        // 0x328150: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32814c) {
            ctx->pc = 0x328170u;
            goto label_328170;
        }
    }
    ctx->pc = 0x328154u;
label_328154:
    // 0x328154: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x328154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_328158:
    // 0x328158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x328158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32815c:
    // 0x32815c: 0x8c64fb40  lw          $a0, -0x4C0($v1)
    ctx->pc = 0x32815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966080)));
label_328160:
    // 0x328160: 0xac70fb40  sw          $s0, -0x4C0($v1)
    ctx->pc = 0x328160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966080), GPR_U32(ctx, 16));
label_328164:
    // 0x328164: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x328164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_328168:
    // 0x328168: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x328168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32816c:
    // 0x32816c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328170:
    // 0x328170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328174:
    // 0x328174: 0x3e00008  jr          $ra
label_328178:
    if (ctx->pc == 0x328178u) {
        ctx->pc = 0x328178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328174u;
        // 0x328178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32817Cu;
        goto label_32817c;
    }
    ctx->pc = 0x328174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328174u;
        // 0x328178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32817Cu;
label_32817c:
    // 0x32817c: 0x0  nop
    ctx->pc = 0x32817cu;
    // NOP
    ctx->pc = 0x328180u;
}
