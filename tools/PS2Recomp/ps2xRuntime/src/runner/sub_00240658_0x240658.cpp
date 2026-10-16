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

// Function: sub_00240658
// Address: 0x240658 - 0x240750
void sub_00240658_0x240658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240658_0x240658");
#endif

    ctx->pc = 0x240658u;

    // 0x240658: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x240658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24065c: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x24065cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x240660: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x240664: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240664u;
    {
        const bool branch_taken_0x240664 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x240668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240664u;
        // 0x240668: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240664) {
            ctx->pc = 0x2406A0u;
            goto label_2406a0;
        }
    }
    ctx->pc = 0x24066Cu;
    // 0x24066c: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x24066cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x240670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240670u;
    {
        const bool branch_taken_0x240670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240670u;
        // 0x240674: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240670) {
            ctx->pc = 0x240688u;
            goto label_240688;
        }
    }
    ctx->pc = 0x240678u;
    // 0x240678: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x240678u;
    {
        const bool branch_taken_0x240678 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240678u;
        // 0x24067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240678) {
            ctx->pc = 0x2406A0u;
            goto label_2406a0;
        }
    }
    ctx->pc = 0x240680u;
    // 0x240680: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x240680u;
    {
        const bool branch_taken_0x240680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240680) {
            ctx->pc = 0x240744u;
            goto label_240744;
        }
    }
    ctx->pc = 0x240688u;
label_240688:
    // 0x240688: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x240688u;
    {
        const bool branch_taken_0x240688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240688u;
        // 0x24068c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240688) {
            ctx->pc = 0x2406D8u;
            goto label_2406d8;
        }
    }
    ctx->pc = 0x240690u;
    // 0x240690: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x240690u;
    {
        const bool branch_taken_0x240690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x240694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240690u;
        // 0x240694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240690) {
            ctx->pc = 0x240718u;
            goto label_240718;
        }
    }
    ctx->pc = 0x240698u;
    // 0x240698: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x240698u;
    {
        const bool branch_taken_0x240698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240698) {
            ctx->pc = 0x240744u;
            goto label_240744;
        }
    }
    ctx->pc = 0x2406A0u;
label_2406a0:
    // 0x2406a0: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x2406a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2406a4: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x2406a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2406a8: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2406a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2406ac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2406acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2406b0: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2406b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2406b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2406b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2406b8: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x2406b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x2406bc: 0x306303e0  andi        $v1, $v1, 0x3E0
    ctx->pc = 0x2406bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
    // 0x2406c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2406c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2406c4: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x2406c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2406c8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2406c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2406cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2406ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2406d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2406D0u;
    {
        const bool branch_taken_0x2406d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406D0u;
        // 0x2406d4: 0x30a58000  andi        $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406d0) {
            ctx->pc = 0x24070Cu;
            goto label_24070c;
        }
    }
    ctx->pc = 0x2406D8u;
label_2406d8:
    // 0x2406d8: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2406d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x2406dc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2406dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2406e0: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x2406e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
    // 0x2406e4: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x2406e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2406e8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2406e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2406ec: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2406ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2406f0: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2406f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2406f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2406f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2406f8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2406f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2406fc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x240700: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240704: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x240704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x240708: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x240708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_24070c:
    // 0x24070c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x240710: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x240710u;
    {
        const bool branch_taken_0x240710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240710) {
            ctx->pc = 0x240740u;
            goto label_240740;
        }
    }
    ctx->pc = 0x240718u;
label_240718:
    // 0x240718: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x240718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x24071c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x240720: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x240720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x240724: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x240724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x240728: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x240728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x24072c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x24072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x240730: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x240730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x240734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x240734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240738: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24073c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x24073cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_240740:
    // 0x240740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240744:
    // 0x240744: 0x3e00008  jr          $ra
    ctx->pc = 0x240744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24074Cu;
    // 0x24074c: 0x0  nop
    ctx->pc = 0x24074cu;
    // NOP
    ctx->pc = 0x240750u;
}
