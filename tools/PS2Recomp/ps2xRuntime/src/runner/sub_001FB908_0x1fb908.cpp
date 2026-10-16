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

// Function: sub_001FB908
// Address: 0x1fb908 - 0x1fbcc0
void sub_001FB908_0x1fb908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB908_0x1fb908");
#endif

    switch (ctx->pc) {
        case 0x1fb940u: goto label_1fb940;
        case 0x1fb978u: goto label_1fb978;
        case 0x1fb9b0u: goto label_1fb9b0;
        case 0x1fb9e8u: goto label_1fb9e8;
        case 0x1fba20u: goto label_1fba20;
        case 0x1fba58u: goto label_1fba58;
        case 0x1fba90u: goto label_1fba90;
        case 0x1fbac8u: goto label_1fbac8;
        case 0x1fbb00u: goto label_1fbb00;
        case 0x1fbb38u: goto label_1fbb38;
        case 0x1fbb70u: goto label_1fbb70;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbe0u: goto label_1fbbe0;
        case 0x1fbc18u: goto label_1fbc18;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc88u: goto label_1fbc88;
        default: break;
    }

    ctx->pc = 0x1fb908u;

    // 0x1fb908: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fb90c: 0x8c82fa08  lw          $v0, -0x5F8($a0)
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA08u));
    // 0x1fb910: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB910u;
    {
        const bool branch_taken_0x1fb910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB910u;
        // 0x1fb914: 0x2485fa08  addiu       $a1, $a0, -0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb910) {
            ctx->pc = 0x1FB934u;
            goto label_1fb934;
        }
    }
    ctx->pc = 0x1FB918u;
    // 0x1fb918: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB918u;
    {
        const bool branch_taken_0x1fb918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB918u;
        // 0x1fb91c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb918) {
            ctx->pc = 0x1FB934u;
            goto label_1fb934;
        }
    }
    ctx->pc = 0x1FB920u;
    // 0x1fb920: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fb924: 0x24632f60  addiu       $v1, $v1, 0x2F60
    ctx->pc = 0x1fb924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12128));
    // 0x1fb928: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fb928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fb92c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fb930: 0xac83fa08  sw          $v1, -0x5F8($a0)
    ctx->pc = 0x1fb930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965768), GPR_U32(ctx, 3));
label_1fb934:
    // 0x1fb934: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB934u;
        // 0x1fb938: 0x2482fa08  addiu       $v0, $a0, -0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB93Cu;
    // 0x1fb93c: 0x0  nop
    ctx->pc = 0x1fb93cu;
    // NOP
label_1fb940:
    // 0x1fb940: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fb944: 0x8c82fa10  lw          $v0, -0x5F0($a0)
    ctx->pc = 0x1fb944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA10u));
    // 0x1fb948: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB948u;
    {
        const bool branch_taken_0x1fb948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB948u;
        // 0x1fb94c: 0x2485fa10  addiu       $a1, $a0, -0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb948) {
            ctx->pc = 0x1FB96Cu;
            goto label_1fb96c;
        }
    }
    ctx->pc = 0x1FB950u;
    // 0x1fb950: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB950u;
    {
        const bool branch_taken_0x1fb950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB950u;
        // 0x1fb954: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb950) {
            ctx->pc = 0x1FB96Cu;
            goto label_1fb96c;
        }
    }
    ctx->pc = 0x1FB958u;
    // 0x1fb958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fb95c: 0x24632f68  addiu       $v1, $v1, 0x2F68
    ctx->pc = 0x1fb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12136));
    // 0x1fb960: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fb964: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fb964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fb968: 0xac83fa10  sw          $v1, -0x5F0($a0)
    ctx->pc = 0x1fb968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965776), GPR_U32(ctx, 3));
label_1fb96c:
    // 0x1fb96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB96Cu;
        // 0x1fb970: 0x2482fa10  addiu       $v0, $a0, -0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB974u;
    // 0x1fb974: 0x0  nop
    ctx->pc = 0x1fb974u;
    // NOP
label_1fb978:
    // 0x1fb978: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fb97c: 0x8c82fa18  lw          $v0, -0x5E8($a0)
    ctx->pc = 0x1fb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA18u));
    // 0x1fb980: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB980u;
    {
        const bool branch_taken_0x1fb980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB980u;
        // 0x1fb984: 0x2485fa18  addiu       $a1, $a0, -0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb980) {
            ctx->pc = 0x1FB9A4u;
            goto label_1fb9a4;
        }
    }
    ctx->pc = 0x1FB988u;
    // 0x1fb988: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB988u;
    {
        const bool branch_taken_0x1fb988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB988u;
        // 0x1fb98c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb988) {
            ctx->pc = 0x1FB9A4u;
            goto label_1fb9a4;
        }
    }
    ctx->pc = 0x1FB990u;
    // 0x1fb990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fb994: 0x24632f70  addiu       $v1, $v1, 0x2F70
    ctx->pc = 0x1fb994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12144));
    // 0x1fb998: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fb99c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fb99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fb9a0: 0xac83fa18  sw          $v1, -0x5E8($a0)
    ctx->pc = 0x1fb9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965784), GPR_U32(ctx, 3));
label_1fb9a4:
    // 0x1fb9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9A4u;
        // 0x1fb9a8: 0x2482fa18  addiu       $v0, $a0, -0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB9ACu;
    // 0x1fb9ac: 0x0  nop
    ctx->pc = 0x1fb9acu;
    // NOP
label_1fb9b0:
    // 0x1fb9b0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fb9b4: 0x8c82fa20  lw          $v0, -0x5E0($a0)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA20u));
    // 0x1fb9b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB9B8u;
    {
        const bool branch_taken_0x1fb9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9B8u;
        // 0x1fb9bc: 0x2485fa20  addiu       $a1, $a0, -0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9b8) {
            ctx->pc = 0x1FB9DCu;
            goto label_1fb9dc;
        }
    }
    ctx->pc = 0x1FB9C0u;
    // 0x1fb9c0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB9C0u;
    {
        const bool branch_taken_0x1fb9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9C0u;
        // 0x1fb9c4: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9c0) {
            ctx->pc = 0x1FB9DCu;
            goto label_1fb9dc;
        }
    }
    ctx->pc = 0x1FB9C8u;
    // 0x1fb9c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fb9cc: 0x24632f78  addiu       $v1, $v1, 0x2F78
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12152));
    // 0x1fb9d0: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fb9d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fb9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fb9d8: 0xac83fa20  sw          $v1, -0x5E0($a0)
    ctx->pc = 0x1fb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965792), GPR_U32(ctx, 3));
label_1fb9dc:
    // 0x1fb9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9DCu;
        // 0x1fb9e0: 0x2482fa20  addiu       $v0, $a0, -0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB9E4u;
    // 0x1fb9e4: 0x0  nop
    ctx->pc = 0x1fb9e4u;
    // NOP
label_1fb9e8:
    // 0x1fb9e8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fb9ec: 0x8c82fa28  lw          $v0, -0x5D8($a0)
    ctx->pc = 0x1fb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA28u));
    // 0x1fb9f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB9F0u;
    {
        const bool branch_taken_0x1fb9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F0u;
        // 0x1fb9f4: 0x2485fa28  addiu       $a1, $a0, -0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9f0) {
            ctx->pc = 0x1FBA14u;
            goto label_1fba14;
        }
    }
    ctx->pc = 0x1FB9F8u;
    // 0x1fb9f8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB9F8u;
    {
        const bool branch_taken_0x1fb9f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F8u;
        // 0x1fb9fc: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9f8) {
            ctx->pc = 0x1FBA14u;
            goto label_1fba14;
        }
    }
    ctx->pc = 0x1FBA00u;
    // 0x1fba00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fba04: 0x24632f80  addiu       $v1, $v1, 0x2F80
    ctx->pc = 0x1fba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12160));
    // 0x1fba08: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fba0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fba10: 0xac83fa28  sw          $v1, -0x5D8($a0)
    ctx->pc = 0x1fba10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965800), GPR_U32(ctx, 3));
label_1fba14:
    // 0x1fba14: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA14u;
        // 0x1fba18: 0x2482fa28  addiu       $v0, $a0, -0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA1Cu;
    // 0x1fba1c: 0x0  nop
    ctx->pc = 0x1fba1cu;
    // NOP
label_1fba20:
    // 0x1fba20: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fba20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fba24: 0x8c82fa30  lw          $v0, -0x5D0($a0)
    ctx->pc = 0x1fba24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA30u));
    // 0x1fba28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBA28u;
    {
        const bool branch_taken_0x1fba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA28u;
        // 0x1fba2c: 0x2485fa30  addiu       $a1, $a0, -0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba28) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA30u;
    // 0x1fba30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBA30u;
    {
        const bool branch_taken_0x1fba30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA30u;
        // 0x1fba34: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba30) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA38u;
    // 0x1fba38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fba3c: 0x24632f88  addiu       $v1, $v1, 0x2F88
    ctx->pc = 0x1fba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12168));
    // 0x1fba40: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fba44: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fba44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fba48: 0xac83fa30  sw          $v1, -0x5D0($a0)
    ctx->pc = 0x1fba48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965808), GPR_U32(ctx, 3));
label_1fba4c:
    // 0x1fba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA4Cu;
        // 0x1fba50: 0x2482fa30  addiu       $v0, $a0, -0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA54u;
    // 0x1fba54: 0x0  nop
    ctx->pc = 0x1fba54u;
    // NOP
label_1fba58:
    // 0x1fba58: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fba5c: 0x8c82fa38  lw          $v0, -0x5C8($a0)
    ctx->pc = 0x1fba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA38u));
    // 0x1fba60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBA60u;
    {
        const bool branch_taken_0x1fba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA60u;
        // 0x1fba64: 0x2485fa38  addiu       $a1, $a0, -0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba60) {
            ctx->pc = 0x1FBA84u;
            goto label_1fba84;
        }
    }
    ctx->pc = 0x1FBA68u;
    // 0x1fba68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBA68u;
    {
        const bool branch_taken_0x1fba68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA68u;
        // 0x1fba6c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba68) {
            ctx->pc = 0x1FBA84u;
            goto label_1fba84;
        }
    }
    ctx->pc = 0x1FBA70u;
    // 0x1fba70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fba74: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x1fba78: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fba7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fba80: 0xac83fa38  sw          $v1, -0x5C8($a0)
    ctx->pc = 0x1fba80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965816), GPR_U32(ctx, 3));
label_1fba84:
    // 0x1fba84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA84u;
        // 0x1fba88: 0x2482fa38  addiu       $v0, $a0, -0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA8Cu;
    // 0x1fba8c: 0x0  nop
    ctx->pc = 0x1fba8cu;
    // NOP
label_1fba90:
    // 0x1fba90: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fba90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fba94: 0x8c82fa40  lw          $v0, -0x5C0($a0)
    ctx->pc = 0x1fba94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA40u));
    // 0x1fba98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBA98u;
    {
        const bool branch_taken_0x1fba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA98u;
        // 0x1fba9c: 0x2485fa40  addiu       $a1, $a0, -0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba98) {
            ctx->pc = 0x1FBABCu;
            goto label_1fbabc;
        }
    }
    ctx->pc = 0x1FBAA0u;
    // 0x1fbaa0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBAA0u;
    {
        const bool branch_taken_0x1fbaa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAA0u;
        // 0x1fbaa4: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbaa0) {
            ctx->pc = 0x1FBABCu;
            goto label_1fbabc;
        }
    }
    ctx->pc = 0x1FBAA8u;
    // 0x1fbaa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbaac: 0x24632f98  addiu       $v1, $v1, 0x2F98
    ctx->pc = 0x1fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12184));
    // 0x1fbab0: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbab4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbab8: 0xac83fa40  sw          $v1, -0x5C0($a0)
    ctx->pc = 0x1fbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965824), GPR_U32(ctx, 3));
label_1fbabc:
    // 0x1fbabc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBABCu;
        // 0x1fbac0: 0x2482fa40  addiu       $v0, $a0, -0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBAC4u;
    // 0x1fbac4: 0x0  nop
    ctx->pc = 0x1fbac4u;
    // NOP
label_1fbac8:
    // 0x1fbac8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbacc: 0x8c82fa48  lw          $v0, -0x5B8($a0)
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA48u));
    // 0x1fbad0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBAD0u;
    {
        const bool branch_taken_0x1fbad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAD0u;
        // 0x1fbad4: 0x2485fa48  addiu       $a1, $a0, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbad0) {
            ctx->pc = 0x1FBAF4u;
            goto label_1fbaf4;
        }
    }
    ctx->pc = 0x1FBAD8u;
    // 0x1fbad8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBAD8u;
    {
        const bool branch_taken_0x1fbad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAD8u;
        // 0x1fbadc: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbad8) {
            ctx->pc = 0x1FBAF4u;
            goto label_1fbaf4;
        }
    }
    ctx->pc = 0x1FBAE0u;
    // 0x1fbae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbae4: 0x24632fa0  addiu       $v1, $v1, 0x2FA0
    ctx->pc = 0x1fbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12192));
    // 0x1fbae8: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbaec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbaf0: 0xac83fa48  sw          $v1, -0x5B8($a0)
    ctx->pc = 0x1fbaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965832), GPR_U32(ctx, 3));
label_1fbaf4:
    // 0x1fbaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAF4u;
        // 0x1fbaf8: 0x2482fa48  addiu       $v0, $a0, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBAFCu;
    // 0x1fbafc: 0x0  nop
    ctx->pc = 0x1fbafcu;
    // NOP
label_1fbb00:
    // 0x1fbb00: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbb04: 0x8c82fa50  lw          $v0, -0x5B0($a0)
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA50u));
    // 0x1fbb08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBB08u;
    {
        const bool branch_taken_0x1fbb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB08u;
        // 0x1fbb0c: 0x2485fa50  addiu       $a1, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb08) {
            ctx->pc = 0x1FBB2Cu;
            goto label_1fbb2c;
        }
    }
    ctx->pc = 0x1FBB10u;
    // 0x1fbb10: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB10u;
        // 0x1fbb14: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB2Cu;
            goto label_1fbb2c;
        }
    }
    ctx->pc = 0x1FBB18u;
    // 0x1fbb18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbb1c: 0x24632fa8  addiu       $v1, $v1, 0x2FA8
    ctx->pc = 0x1fbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12200));
    // 0x1fbb20: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbb24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbb28: 0xac83fa50  sw          $v1, -0x5B0($a0)
    ctx->pc = 0x1fbb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965840), GPR_U32(ctx, 3));
label_1fbb2c:
    // 0x1fbb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB2Cu;
        // 0x1fbb30: 0x2482fa50  addiu       $v0, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBB34u;
    // 0x1fbb34: 0x0  nop
    ctx->pc = 0x1fbb34u;
    // NOP
label_1fbb38:
    // 0x1fbb38: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbb3c: 0x8c82fa58  lw          $v0, -0x5A8($a0)
    ctx->pc = 0x1fbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA58u));
    // 0x1fbb40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBB40u;
    {
        const bool branch_taken_0x1fbb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB40u;
        // 0x1fbb44: 0x2485fa58  addiu       $a1, $a0, -0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb40) {
            ctx->pc = 0x1FBB64u;
            goto label_1fbb64;
        }
    }
    ctx->pc = 0x1FBB48u;
    // 0x1fbb48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBB48u;
    {
        const bool branch_taken_0x1fbb48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB48u;
        // 0x1fbb4c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb48) {
            ctx->pc = 0x1FBB64u;
            goto label_1fbb64;
        }
    }
    ctx->pc = 0x1FBB50u;
    // 0x1fbb50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbb54: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x1fbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
    // 0x1fbb58: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbb5c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbb60: 0xac83fa58  sw          $v1, -0x5A8($a0)
    ctx->pc = 0x1fbb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965848), GPR_U32(ctx, 3));
label_1fbb64:
    // 0x1fbb64: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB64u;
        // 0x1fbb68: 0x2482fa58  addiu       $v0, $a0, -0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBB6Cu;
    // 0x1fbb6c: 0x0  nop
    ctx->pc = 0x1fbb6cu;
    // NOP
label_1fbb70:
    // 0x1fbb70: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbb74: 0x8c82fa60  lw          $v0, -0x5A0($a0)
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA60u));
    // 0x1fbb78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBB78u;
    {
        const bool branch_taken_0x1fbb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB78u;
        // 0x1fbb7c: 0x2485fa60  addiu       $a1, $a0, -0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb78) {
            ctx->pc = 0x1FBB9Cu;
            goto label_1fbb9c;
        }
    }
    ctx->pc = 0x1FBB80u;
    // 0x1fbb80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBB80u;
    {
        const bool branch_taken_0x1fbb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB80u;
        // 0x1fbb84: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb80) {
            ctx->pc = 0x1FBB9Cu;
            goto label_1fbb9c;
        }
    }
    ctx->pc = 0x1FBB88u;
    // 0x1fbb88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbb8c: 0x24632fb8  addiu       $v1, $v1, 0x2FB8
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12216));
    // 0x1fbb90: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbb94: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbb98: 0xac83fa60  sw          $v1, -0x5A0($a0)
    ctx->pc = 0x1fbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965856), GPR_U32(ctx, 3));
label_1fbb9c:
    // 0x1fbb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB9Cu;
        // 0x1fbba0: 0x2482fa60  addiu       $v0, $a0, -0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBBA4u;
    // 0x1fbba4: 0x0  nop
    ctx->pc = 0x1fbba4u;
    // NOP
label_1fbba8:
    // 0x1fbba8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbbac: 0x8c82fa68  lw          $v0, -0x598($a0)
    ctx->pc = 0x1fbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA68u));
    // 0x1fbbb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBBB0u;
    {
        const bool branch_taken_0x1fbbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBB0u;
        // 0x1fbbb4: 0x2485fa68  addiu       $a1, $a0, -0x598 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbb0) {
            ctx->pc = 0x1FBBD4u;
            goto label_1fbbd4;
        }
    }
    ctx->pc = 0x1FBBB8u;
    // 0x1fbbb8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBBB8u;
    {
        const bool branch_taken_0x1fbbb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBB8u;
        // 0x1fbbbc: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbb8) {
            ctx->pc = 0x1FBBD4u;
            goto label_1fbbd4;
        }
    }
    ctx->pc = 0x1FBBC0u;
    // 0x1fbbc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbbc4: 0x24632fc0  addiu       $v1, $v1, 0x2FC0
    ctx->pc = 0x1fbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12224));
    // 0x1fbbc8: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbbcc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbbccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbbd0: 0xac83fa68  sw          $v1, -0x598($a0)
    ctx->pc = 0x1fbbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965864), GPR_U32(ctx, 3));
label_1fbbd4:
    // 0x1fbbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBD4u;
        // 0x1fbbd8: 0x2482fa68  addiu       $v0, $a0, -0x598 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBBDCu;
    // 0x1fbbdc: 0x0  nop
    ctx->pc = 0x1fbbdcu;
    // NOP
label_1fbbe0:
    // 0x1fbbe0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbbe4: 0x8c82fa70  lw          $v0, -0x590($a0)
    ctx->pc = 0x1fbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA70u));
    // 0x1fbbe8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBBE8u;
    {
        const bool branch_taken_0x1fbbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBE8u;
        // 0x1fbbec: 0x2485fa70  addiu       $a1, $a0, -0x590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbe8) {
            ctx->pc = 0x1FBC0Cu;
            goto label_1fbc0c;
        }
    }
    ctx->pc = 0x1FBBF0u;
    // 0x1fbbf0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBBF0u;
    {
        const bool branch_taken_0x1fbbf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBF0u;
        // 0x1fbbf4: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbf0) {
            ctx->pc = 0x1FBC0Cu;
            goto label_1fbc0c;
        }
    }
    ctx->pc = 0x1FBBF8u;
    // 0x1fbbf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbbfc: 0x24632fc8  addiu       $v1, $v1, 0x2FC8
    ctx->pc = 0x1fbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12232));
    // 0x1fbc00: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbc04: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbc08: 0xac83fa70  sw          $v1, -0x590($a0)
    ctx->pc = 0x1fbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965872), GPR_U32(ctx, 3));
label_1fbc0c:
    // 0x1fbc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC0Cu;
        // 0x1fbc10: 0x2482fa70  addiu       $v0, $a0, -0x590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC14u;
    // 0x1fbc14: 0x0  nop
    ctx->pc = 0x1fbc14u;
    // NOP
label_1fbc18:
    // 0x1fbc18: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbc1c: 0x8c82fa78  lw          $v0, -0x588($a0)
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA78u));
    // 0x1fbc20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBC20u;
    {
        const bool branch_taken_0x1fbc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0x2485fa78  addiu       $a1, $a0, -0x588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc20) {
            ctx->pc = 0x1FBC44u;
            goto label_1fbc44;
        }
    }
    ctx->pc = 0x1FBC28u;
    // 0x1fbc28: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC28u;
    {
        const bool branch_taken_0x1fbc28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC28u;
        // 0x1fbc2c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc28) {
            ctx->pc = 0x1FBC44u;
            goto label_1fbc44;
        }
    }
    ctx->pc = 0x1FBC30u;
    // 0x1fbc30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbc34: 0x24632fd0  addiu       $v1, $v1, 0x2FD0
    ctx->pc = 0x1fbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12240));
    // 0x1fbc38: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbc3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbc40: 0xac83fa78  sw          $v1, -0x588($a0)
    ctx->pc = 0x1fbc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965880), GPR_U32(ctx, 3));
label_1fbc44:
    // 0x1fbc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC44u;
        // 0x1fbc48: 0x2482fa78  addiu       $v0, $a0, -0x588 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC4Cu;
    // 0x1fbc4c: 0x0  nop
    ctx->pc = 0x1fbc4cu;
    // NOP
label_1fbc50:
    // 0x1fbc50: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbc54: 0x8c82fa80  lw          $v0, -0x580($a0)
    ctx->pc = 0x1fbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA80u));
    // 0x1fbc58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBC58u;
    {
        const bool branch_taken_0x1fbc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC58u;
        // 0x1fbc5c: 0x2485fa80  addiu       $a1, $a0, -0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc58) {
            ctx->pc = 0x1FBC7Cu;
            goto label_1fbc7c;
        }
    }
    ctx->pc = 0x1FBC60u;
    // 0x1fbc60: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC60u;
    {
        const bool branch_taken_0x1fbc60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC60u;
        // 0x1fbc64: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc60) {
            ctx->pc = 0x1FBC7Cu;
            goto label_1fbc7c;
        }
    }
    ctx->pc = 0x1FBC68u;
    // 0x1fbc68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbc6c: 0x24632fd8  addiu       $v1, $v1, 0x2FD8
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12248));
    // 0x1fbc70: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbc74: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbc74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbc78: 0xac83fa80  sw          $v1, -0x580($a0)
    ctx->pc = 0x1fbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965888), GPR_U32(ctx, 3));
label_1fbc7c:
    // 0x1fbc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC7Cu;
        // 0x1fbc80: 0x2482fa80  addiu       $v0, $a0, -0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC84u;
    // 0x1fbc84: 0x0  nop
    ctx->pc = 0x1fbc84u;
    // NOP
label_1fbc88:
    // 0x1fbc88: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1fbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x1fbc8c: 0x8c82fa88  lw          $v0, -0x578($a0)
    ctx->pc = 0x1fbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BFA88u));
    // 0x1fbc90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBC90u;
    {
        const bool branch_taken_0x1fbc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC90u;
        // 0x1fbc94: 0x2485fa88  addiu       $a1, $a0, -0x578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc90) {
            ctx->pc = 0x1FBCB4u;
            goto label_1fbcb4;
        }
    }
    ctx->pc = 0x1FBC98u;
    // 0x1fbc98: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC98u;
    {
        const bool branch_taken_0x1fbc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC98u;
        // 0x1fbc9c: 0x3c03006a  lui         $v1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc98) {
            ctx->pc = 0x1FBCB4u;
            goto label_1fbcb4;
        }
    }
    ctx->pc = 0x1FBCA0u;
    // 0x1fbca0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1fbca4: 0x24632fe0  addiu       $v1, $v1, 0x2FE0
    ctx->pc = 0x1fbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12256));
    // 0x1fbca8: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
    // 0x1fbcac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fbcb0: 0xac83fa88  sw          $v1, -0x578($a0)
    ctx->pc = 0x1fbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965896), GPR_U32(ctx, 3));
label_1fbcb4:
    // 0x1fbcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCB4u;
        // 0x1fbcb8: 0x2482fa88  addiu       $v0, $a0, -0x578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBCBCu;
    // 0x1fbcbc: 0x0  nop
    ctx->pc = 0x1fbcbcu;
    // NOP
    ctx->pc = 0x1fbcc0u;
}
