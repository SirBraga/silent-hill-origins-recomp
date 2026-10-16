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

// Function: sub_00170940
// Address: 0x170940 - 0x1709e8
void sub_00170940_0x170940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170940_0x170940");
#endif

    switch (ctx->pc) {
        case 0x170964u: goto label_170964;
        case 0x170970u: goto label_170970;
        case 0x17097cu: goto label_17097c;
        case 0x170988u: goto label_170988;
        case 0x170994u: goto label_170994;
        case 0x1709acu: goto label_1709ac;
        case 0x1709bcu: goto label_1709bc;
        case 0x1709ccu: goto label_1709cc;
        case 0x1709dcu: goto label_1709dc;
        default: break;
    }

    ctx->pc = 0x170940u;

    // 0x170940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170944: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x170948: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x170948u;
    {
        const bool branch_taken_0x170948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170948u;
        // 0x17094c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170948) {
            ctx->pc = 0x1709DCu;
            goto label_1709dc;
        }
    }
    ctx->pc = 0x170950u;
    // 0x170950: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x170950u;
    {
        const bool branch_taken_0x170950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x170950) {
            ctx->pc = 0x170954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170950u;
            // 0x170954: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1709A0u;
            goto label_1709a0;
        }
    }
    ctx->pc = 0x170958u;
    // 0x170958: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17095c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17095Cu;
    SET_GPR_U32(ctx, 31, 0x170964u);
    ctx->pc = 0x170960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17095Cu;
    // 0x170960: 0x2484f738  addiu       $a0, $a0, -0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17095Cu, 0x170964u)) {
        return;
    }
    ctx->pc = 0x170964u;
label_170964:
    // 0x170964: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170968: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x170968u;
    SET_GPR_U32(ctx, 31, 0x170970u);
    ctx->pc = 0x17096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170968u;
    // 0x17096c: 0x2484f740  addiu       $a0, $a0, -0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x170968u, 0x170970u)) {
        return;
    }
    ctx->pc = 0x170970u;
label_170970:
    // 0x170970: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x170970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170974: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x170974u;
    SET_GPR_U32(ctx, 31, 0x17097Cu);
    ctx->pc = 0x170978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170974u;
    // 0x170978: 0x2484f748  addiu       $a0, $a0, -0x8B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x170974u, 0x17097Cu)) {
        return;
    }
    ctx->pc = 0x17097Cu;
label_17097c:
    // 0x17097c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17097cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x170980: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x170980u;
    SET_GPR_U32(ctx, 31, 0x170988u);
    ctx->pc = 0x170984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170980u;
    // 0x170984: 0x2484f750  addiu       $a0, $a0, -0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x170980u, 0x170988u)) {
        return;
    }
    ctx->pc = 0x170988u;
label_170988:
    // 0x170988: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x17098c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17098Cu;
    SET_GPR_U32(ctx, 31, 0x170994u);
    ctx->pc = 0x170990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17098Cu;
    // 0x170990: 0x248453b8  addiu       $a0, $a0, 0x53B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17098Cu, 0x170994u)) {
        return;
    }
    ctx->pc = 0x170994u;
label_170994:
    // 0x170994: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x170998: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x170998u;
    {
        const bool branch_taken_0x170998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170998u;
        // 0x17099c: 0xac62f758  sw          $v0, -0x8A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170998) {
            ctx->pc = 0x1709DCu;
            goto label_1709dc;
        }
    }
    ctx->pc = 0x1709A0u;
label_1709a0:
    // 0x1709a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1709a4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1709A4u;
    SET_GPR_U32(ctx, 31, 0x1709ACu);
    ctx->pc = 0x1709A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709A4u;
    // 0x1709a8: 0x2484f750  addiu       $a0, $a0, -0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1709A4u, 0x1709ACu)) {
        return;
    }
    ctx->pc = 0x1709ACu;
label_1709ac:
    // 0x1709ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1709b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1709b4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1709B4u;
    SET_GPR_U32(ctx, 31, 0x1709BCu);
    ctx->pc = 0x1709B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709B4u;
    // 0x1709b8: 0x2484f748  addiu       $a0, $a0, -0x8B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1709B4u, 0x1709BCu)) {
        return;
    }
    ctx->pc = 0x1709BCu;
label_1709bc:
    // 0x1709bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1709c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1709c4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1709C4u;
    SET_GPR_U32(ctx, 31, 0x1709CCu);
    ctx->pc = 0x1709C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709C4u;
    // 0x1709c8: 0x2484f740  addiu       $a0, $a0, -0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1709C4u, 0x1709CCu)) {
        return;
    }
    ctx->pc = 0x1709CCu;
label_1709cc:
    // 0x1709cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1709ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1709d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1709d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1709D4u;
    SET_GPR_U32(ctx, 31, 0x1709DCu);
    ctx->pc = 0x1709D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1709D4u;
    // 0x1709d8: 0x2484f738  addiu       $a0, $a0, -0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1709D4u, 0x1709DCu)) {
        return;
    }
    ctx->pc = 0x1709DCu;
label_1709dc:
    // 0x1709dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1709dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1709e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1709E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709E0u;
        // 0x1709e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1709E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1709E8u;
}
