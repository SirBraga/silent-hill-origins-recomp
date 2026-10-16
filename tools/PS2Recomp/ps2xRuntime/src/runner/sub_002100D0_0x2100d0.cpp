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

// Function: sub_002100D0
// Address: 0x2100d0 - 0x210230
void sub_002100D0_0x2100d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002100D0_0x2100d0");
#endif

    switch (ctx->pc) {
        case 0x2100d0u: goto label_2100d0;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100d8u: goto label_2100d8;
        case 0x2100dcu: goto label_2100dc;
        case 0x2100e0u: goto label_2100e0;
        case 0x2100e4u: goto label_2100e4;
        case 0x2100e8u: goto label_2100e8;
        case 0x2100ecu: goto label_2100ec;
        case 0x2100f0u: goto label_2100f0;
        case 0x2100f4u: goto label_2100f4;
        case 0x2100f8u: goto label_2100f8;
        case 0x2100fcu: goto label_2100fc;
        case 0x210100u: goto label_210100;
        case 0x210104u: goto label_210104;
        case 0x210108u: goto label_210108;
        case 0x21010cu: goto label_21010c;
        case 0x210110u: goto label_210110;
        case 0x210114u: goto label_210114;
        case 0x210118u: goto label_210118;
        case 0x21011cu: goto label_21011c;
        case 0x210120u: goto label_210120;
        case 0x210124u: goto label_210124;
        case 0x210128u: goto label_210128;
        case 0x21012cu: goto label_21012c;
        case 0x210130u: goto label_210130;
        case 0x210134u: goto label_210134;
        case 0x210138u: goto label_210138;
        case 0x21013cu: goto label_21013c;
        case 0x210140u: goto label_210140;
        case 0x210144u: goto label_210144;
        case 0x210148u: goto label_210148;
        case 0x21014cu: goto label_21014c;
        case 0x210150u: goto label_210150;
        case 0x210154u: goto label_210154;
        case 0x210158u: goto label_210158;
        case 0x21015cu: goto label_21015c;
        case 0x210160u: goto label_210160;
        case 0x210164u: goto label_210164;
        case 0x210168u: goto label_210168;
        case 0x21016cu: goto label_21016c;
        case 0x210170u: goto label_210170;
        case 0x210174u: goto label_210174;
        case 0x210178u: goto label_210178;
        case 0x21017cu: goto label_21017c;
        case 0x210180u: goto label_210180;
        case 0x210184u: goto label_210184;
        case 0x210188u: goto label_210188;
        case 0x21018cu: goto label_21018c;
        case 0x210190u: goto label_210190;
        case 0x210194u: goto label_210194;
        case 0x210198u: goto label_210198;
        case 0x21019cu: goto label_21019c;
        case 0x2101a0u: goto label_2101a0;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101acu: goto label_2101ac;
        case 0x2101b0u: goto label_2101b0;
        case 0x2101b4u: goto label_2101b4;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101c0u: goto label_2101c0;
        case 0x2101c4u: goto label_2101c4;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d0u: goto label_2101d0;
        case 0x2101d4u: goto label_2101d4;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101dcu: goto label_2101dc;
        case 0x2101e0u: goto label_2101e0;
        case 0x2101e4u: goto label_2101e4;
        case 0x2101e8u: goto label_2101e8;
        case 0x2101ecu: goto label_2101ec;
        case 0x2101f0u: goto label_2101f0;
        case 0x2101f4u: goto label_2101f4;
        case 0x2101f8u: goto label_2101f8;
        case 0x2101fcu: goto label_2101fc;
        case 0x210200u: goto label_210200;
        case 0x210204u: goto label_210204;
        case 0x210208u: goto label_210208;
        case 0x21020cu: goto label_21020c;
        case 0x210210u: goto label_210210;
        case 0x210214u: goto label_210214;
        case 0x210218u: goto label_210218;
        case 0x21021cu: goto label_21021c;
        case 0x210220u: goto label_210220;
        case 0x210224u: goto label_210224;
        case 0x210228u: goto label_210228;
        case 0x21022cu: goto label_21022c;
        default: break;
    }

    ctx->pc = 0x2100d0u;

label_2100d0:
    // 0x2100d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2100d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2100d4:
    // 0x2100d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2100d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2100d8:
    // 0x2100d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2100d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2100dc:
    // 0x2100dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2100dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2100e0:
    // 0x2100e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2100e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2100e4:
    // 0x2100e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2100e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2100e8:
    // 0x2100e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2100e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2100ec:
    // 0x2100ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2100ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2100f0:
    // 0x2100f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2100f4:
    // 0x2100f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2100f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2100f8:
    // 0x2100f8: 0x40f809  jalr        $v0
label_2100fc:
    if (ctx->pc == 0x2100FCu) {
        ctx->pc = 0x2100FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F8u;
        // 0x2100fc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210100u;
        goto label_210100;
    }
    ctx->pc = 0x2100F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210100u);
        ctx->pc = 0x2100FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F8u;
        // 0x2100fc: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100F8u, 0x210100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210100u;
label_210100:
    // 0x210100: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_210104:
    // 0x210104: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x210104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_210108:
    // 0x210108: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
label_21010c:
    // 0x21010c: 0xae0201cc  sw          $v0, 0x1CC($s0)
    ctx->pc = 0x21010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
label_210110:
    // 0x210110: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x210110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
label_210114:
    // 0x210114: 0x24840638  addiu       $a0, $a0, 0x638
    ctx->pc = 0x210114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
label_210118:
    // 0x210118: 0x24a50640  addiu       $a1, $a1, 0x640
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
label_21011c:
    // 0x21011c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21011cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_210120:
    // 0x210120: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x210120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_210124:
    // 0x210124: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x210124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_210128:
    // 0x210128: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x210128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_21012c:
    // 0x21012c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x21012cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_210130:
    // 0x210130: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_210134:
    // 0x210134: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x210134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_210138:
    // 0x210138: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_21013c:
    if (ctx->pc == 0x21013Cu) {
        ctx->pc = 0x21013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210138u;
        // 0x21013c: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210140u;
        goto label_210140;
    }
    ctx->pc = 0x210138u;
    {
        const bool branch_taken_0x210138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210138) {
            ctx->pc = 0x21013Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210138u;
            // 0x21013c: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21016Cu;
            goto label_21016c;
        }
    }
    ctx->pc = 0x210140u;
label_210140:
    // 0x210140: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x210140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210144:
    // 0x210144: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_210148:
    // 0x210148: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21014c:
    // 0x21014c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21014cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_210150:
    // 0x210150: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210154:
    // 0x210154: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x210154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_210158:
    // 0x210158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21015c:
    // 0x21015c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210160:
    // 0x210160: 0x40f809  jalr        $v0
label_210164:
    if (ctx->pc == 0x210164u) {
        ctx->pc = 0x210164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210160u;
        // 0x210164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210168u;
        goto label_210168;
    }
    ctx->pc = 0x210160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210168u);
        ctx->pc = 0x210164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210160u;
        // 0x210164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210160u, 0x210168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210168u;
label_210168:
    // 0x210168: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_21016c:
    // 0x21016c: 0x28420101  slti        $v0, $v0, 0x101
    ctx->pc = 0x21016cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
label_210170:
    // 0x210170: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_210174:
    if (ctx->pc == 0x210174u) {
        ctx->pc = 0x210174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210170u;
        // 0x210174: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210178u;
        goto label_210178;
    }
    ctx->pc = 0x210170u;
    {
        const bool branch_taken_0x210170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210170u;
        // 0x210174: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210170) {
            ctx->pc = 0x21019Cu;
            goto label_21019c;
        }
    }
    ctx->pc = 0x210178u;
label_210178:
    // 0x210178: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21017c:
    // 0x21017c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x21017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_210180:
    // 0x210180: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x210180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_210184:
    // 0x210184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210188:
    // 0x210188: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x210188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_21018c:
    // 0x21018c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210190:
    // 0x210190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x210190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210194:
    // 0x210194: 0x40f809  jalr        $v0
label_210198:
    if (ctx->pc == 0x210198u) {
        ctx->pc = 0x210198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210194u;
        // 0x210198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21019Cu;
        goto label_21019c;
    }
    ctx->pc = 0x210194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21019Cu);
        ctx->pc = 0x210198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210194u;
        // 0x210198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210194u, 0x21019Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21019Cu;
label_21019c:
    // 0x21019c: 0xc083d9a  jal         func_20F668
label_2101a0:
    if (ctx->pc == 0x2101A0u) {
        ctx->pc = 0x2101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21019Cu;
        // 0x2101a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101A4u;
        goto label_2101a4;
    }
    ctx->pc = 0x21019Cu;
    SET_GPR_U32(ctx, 31, 0x2101A4u);
    ctx->pc = 0x2101A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21019Cu;
    // 0x2101a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F668u, 0x21019Cu, 0x2101A4u)) {
        return;
    }
    ctx->pc = 0x2101A4u;
label_2101a4:
    // 0x2101a4: 0xc083e2e  jal         func_20F8B8
label_2101a8:
    if (ctx->pc == 0x2101A8u) {
        ctx->pc = 0x2101A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101A4u;
        // 0x2101a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101ACu;
        goto label_2101ac;
    }
    ctx->pc = 0x2101A4u;
    SET_GPR_U32(ctx, 31, 0x2101ACu);
    ctx->pc = 0x2101A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101A4u;
    // 0x2101a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F8B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F8B8u, 0x2101A4u, 0x2101ACu)) {
        return;
    }
    ctx->pc = 0x2101ACu;
label_2101ac:
    // 0x2101ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2101acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2101b0:
    // 0x2101b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2101b4:
    // 0x2101b4: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_2101b8:
    if (ctx->pc == 0x2101B8u) {
        ctx->pc = 0x2101B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B4u;
        // 0x2101b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101BCu;
        goto label_2101bc;
    }
    ctx->pc = 0x2101B4u;
    {
        const bool branch_taken_0x2101b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2101b4) {
            ctx->pc = 0x2101B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2101B4u;
            // 0x2101b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210214u;
            goto label_210214;
        }
    }
    ctx->pc = 0x2101BCu;
label_2101bc:
    // 0x2101bc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2101bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2101c0:
    // 0x2101c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2101c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2101c4:
    // 0x2101c4: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2101c8:
    // 0x2101c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2101c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2101cc:
    // 0x2101cc: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x2101ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_2101d0:
    // 0x2101d0: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_2101d4:
    if (ctx->pc == 0x2101D4u) {
        ctx->pc = 0x2101D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101D0u;
        // 0x2101d4: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101D8u;
        goto label_2101d8;
    }
    ctx->pc = 0x2101D0u;
    {
        const bool branch_taken_0x2101d0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2101D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101D0u;
        // 0x2101d4: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101d0) {
            ctx->pc = 0x210210u;
            goto label_210210;
        }
    }
    ctx->pc = 0x2101D8u;
label_2101d8:
    // 0x2101d8: 0x24910044  addiu       $s1, $a0, 0x44
    ctx->pc = 0x2101d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_2101dc:
    // 0x2101dc: 0x0  nop
    ctx->pc = 0x2101dcu;
    // NOP
label_2101e0:
    // 0x2101e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2101e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2101e4:
    // 0x2101e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2101e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2101e8:
    // 0x2101e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2101e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2101ec:
    // 0x2101ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2101ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2101f0:
    // 0x2101f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2101f4:
    // 0x2101f4: 0x40f809  jalr        $v0
label_2101f8:
    if (ctx->pc == 0x2101F8u) {
        ctx->pc = 0x2101F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F4u;
        // 0x2101f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101FCu;
        goto label_2101fc;
    }
    ctx->pc = 0x2101F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2101FCu);
        ctx->pc = 0x2101F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F4u;
        // 0x2101f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2101F4u, 0x2101FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2101FCu;
label_2101fc:
    // 0x2101fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2101fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_210200:
    // 0x210200: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_210204:
    // 0x210204: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x210204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_210208:
    // 0x210208: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_21020c:
    if (ctx->pc == 0x21020Cu) {
        ctx->pc = 0x21020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210208u;
        // 0x21020c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210210u;
        goto label_210210;
    }
    ctx->pc = 0x210208u;
    {
        const bool branch_taken_0x210208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210208u;
        // 0x21020c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210208) {
            ctx->pc = 0x2101E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2101e0;
        }
    }
    ctx->pc = 0x210210u;
label_210210:
    // 0x210210: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x210210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210214:
    // 0x210214: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x210214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210218:
    // 0x210218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21021c:
    // 0x21021c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x21021cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210220:
    // 0x210220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210224:
    // 0x210224: 0x3e00008  jr          $ra
label_210228:
    if (ctx->pc == 0x210228u) {
        ctx->pc = 0x210228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210224u;
        // 0x210228: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21022Cu;
        goto label_21022c;
    }
    ctx->pc = 0x210224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210224u;
        // 0x210228: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21022Cu;
label_21022c:
    // 0x21022c: 0x0  nop
    ctx->pc = 0x21022cu;
    // NOP
    ctx->pc = 0x210230u;
}
