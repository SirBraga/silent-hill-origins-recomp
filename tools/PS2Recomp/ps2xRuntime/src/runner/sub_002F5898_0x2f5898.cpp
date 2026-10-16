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

// Function: sub_002F5898
// Address: 0x2f5898 - 0x2f5ac8
void sub_002F5898_0x2f5898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5898_0x2f5898");
#endif

    switch (ctx->pc) {
        case 0x2f58bcu: goto label_2f58bc;
        case 0x2f58dcu: goto label_2f58dc;
        case 0x2f5900u: goto label_2f5900;
        case 0x2f5944u: goto label_2f5944;
        case 0x2f5954u: goto label_2f5954;
        case 0x2f5970u: goto label_2f5970;
        case 0x2f59b4u: goto label_2f59b4;
        case 0x2f59c8u: goto label_2f59c8;
        case 0x2f59f0u: goto label_2f59f0;
        case 0x2f5a00u: goto label_2f5a00;
        case 0x2f5a38u: goto label_2f5a38;
        case 0x2f5a68u: goto label_2f5a68;
        case 0x2f5a78u: goto label_2f5a78;
        default: break;
    }

    ctx->pc = 0x2f5898u;

    // 0x2f5898: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
    // 0x2f589c: 0xffb30350  sd          $s3, 0x350($sp)
    ctx->pc = 0x2f589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 19));
    // 0x2f58a0: 0xffb00320  sd          $s0, 0x320($sp)
    ctx->pc = 0x2f58a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 16));
    // 0x2f58a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f58a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58a8: 0xffbf0360  sd          $ra, 0x360($sp)
    ctx->pc = 0x2f58a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 31));
    // 0x2f58ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f58acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58b0: 0xffb20340  sd          $s2, 0x340($sp)
    ctx->pc = 0x2f58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 18));
    // 0x2f58b4: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F58B4u;
    SET_GPR_U32(ctx, 31, 0x2F58BCu);
    ctx->pc = 0x2F58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58B4u;
    // 0x2f58b8: 0xffb10330  sd          $s1, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F58B4u, 0x2F58BCu)) {
        return;
    }
    ctx->pc = 0x2F58BCu;
label_2f58bc:
    // 0x2f58bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f58bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58c0: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x2F58C0u;
    {
        const bool branch_taken_0x2f58c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58C0u;
        // 0x2f58c4: 0xafa2031c  sw          $v0, 0x31C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58c0) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F58C8u;
    // 0x2f58c8: 0x27b10210  addiu       $s1, $sp, 0x210
    ctx->pc = 0x2f58c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2f58cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f58d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58d4: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F58D4u;
    SET_GPR_U32(ctx, 31, 0x2F58DCu);
    ctx->pc = 0x2F58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58D4u;
    // 0x2f58d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F58D4u, 0x2F58DCu)) {
        return;
    }
    ctx->pc = 0x2F58DCu;
label_2f58dc:
    // 0x2f58dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f58dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58e0: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F58E0u;
    {
        const bool branch_taken_0x2f58e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F58E0u;
        // 0x2f58e4: 0xafa2031c  sw          $v0, 0x31C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f58e0) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F58E8u;
    // 0x2f58e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f58e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f58ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f58f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f58f4: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x2f58f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x2f58f8: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F58F8u;
    SET_GPR_U32(ctx, 31, 0x2F5900u);
    ctx->pc = 0x2F58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F58F8u;
    // 0x2f58fc: 0x27a80314  addiu       $t0, $sp, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F58F8u, 0x2F5900u)) {
        return;
    }
    ctx->pc = 0x2F5900u;
label_2f5900:
    // 0x2f5900: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f5900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5908: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f590c: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F590Cu;
    {
        const bool branch_taken_0x2f590c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F590Cu;
        // 0x2f5910: 0xafa2031c  sw          $v0, 0x31C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f590c) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F5914u;
    // 0x2f5914: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x2f5914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5918: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2f5918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f591c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F591Cu;
    {
        const bool branch_taken_0x2f591c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f591c) {
            ctx->pc = 0x2F5920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F591Cu;
            // 0x2f5920: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5930u;
            goto label_2f5930;
        }
    }
    ctx->pc = 0x2F5924u;
    // 0x2f5924: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5928: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2F5928u;
    {
        const bool branch_taken_0x2f5928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5928u;
        // 0x2f592c: 0x3442000d  ori         $v0, $v0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5928) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F5930u;
label_2f5930:
    // 0x2f5930: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5930u;
    {
        const bool branch_taken_0x2f5930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5930u;
        // 0x2f5934: 0x27b00290  addiu       $s0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5930) {
            ctx->pc = 0x2F5998u;
            goto label_2f5998;
        }
    }
    ctx->pc = 0x2F5938u;
    // 0x2f5938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f593c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F593Cu;
    SET_GPR_U32(ctx, 31, 0x2F5944u);
    ctx->pc = 0x2F5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F593Cu;
    // 0x2f5940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F593Cu, 0x2F5944u)) {
        return;
    }
    ctx->pc = 0x2F5944u;
label_2f5944:
    // 0x2f5944: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2f5944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2f5948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f594c: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x2F594Cu;
    SET_GPR_U32(ctx, 31, 0x2F5954u);
    ctx->pc = 0x2F5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F594Cu;
    // 0x2f5950: 0x24a501b0  addiu       $a1, $a1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x2F594Cu, 0x2F5954u)) {
        return;
    }
    ctx->pc = 0x2F5954u;
label_2f5954:
    // 0x2f5954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f595c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f595cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5960: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f5960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5968: 0xc0bd6fc  jal         func_2F5BF0
    ctx->pc = 0x2F5968u;
    SET_GPR_U32(ctx, 31, 0x2F5970u);
    ctx->pc = 0x2F596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5968u;
    // 0x2f596c: 0x27a90318  addiu       $t1, $sp, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F5BF0u, 0x2F5968u, 0x2F5970u)) {
        return;
    }
    ctx->pc = 0x2F5970u;
label_2f5970:
    // 0x2f5970: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f5970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5974: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F5974u;
    {
        const bool branch_taken_0x2f5974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5974u;
        // 0x2f5978: 0xafa2031c  sw          $v0, 0x31C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5974) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F597Cu;
    // 0x2f597c: 0x8fa20318  lw          $v0, 0x318($sp)
    ctx->pc = 0x2f597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x2f5980: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2f5980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f5984: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5984u;
    {
        const bool branch_taken_0x2f5984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5984u;
        // 0x2f5988: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5984) {
            ctx->pc = 0x2F5998u;
            goto label_2f5998;
        }
    }
    ctx->pc = 0x2F598Cu;
    // 0x2f598c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f598cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5990: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2F5990u;
    {
        const bool branch_taken_0x2f5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5990u;
        // 0x2f5994: 0x3442005a  ori         $v0, $v0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)90);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5990) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F5998u;
label_2f5998:
    // 0x2f5998: 0x38628000  xori        $v0, $v1, 0x8000
    ctx->pc = 0x2f5998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32768);
    // 0x2f599c: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x2f599cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2f59a0: 0x8fa70314  lw          $a3, 0x314($sp)
    ctx->pc = 0x2f59a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
    // 0x2f59a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f59a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59a8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2f59a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f59ac: 0xc0bd056  jal         func_2F4158
    ctx->pc = 0x2F59ACu;
    SET_GPR_U32(ctx, 31, 0x2F59B4u);
    ctx->pc = 0x2F59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59ACu;
    // 0x2f59b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4158u, 0x2F59ACu, 0x2F59B4u)) {
        return;
    }
    ctx->pc = 0x2F59B4u;
label_2f59b4:
    // 0x2f59b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f59b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59b8: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F59B8u;
    {
        const bool branch_taken_0x2f59b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59B8u;
        // 0x2f59bc: 0xafa2031c  sw          $v0, 0x31C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59b8) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F59C0u;
    // 0x2f59c0: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F59C0u;
    SET_GPR_U32(ctx, 31, 0x2F59C8u);
    ctx->pc = 0x2F59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59C0u;
    // 0x2f59c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F59C0u, 0x2F59C8u)) {
        return;
    }
    ctx->pc = 0x2F59C8u;
label_2f59c8:
    // 0x2f59c8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F59C8u;
    {
        const bool branch_taken_0x2f59c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59C8u;
        // 0x2f59cc: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59c8) {
            ctx->pc = 0x2F5A80u;
            goto label_2f5a80;
        }
    }
    ctx->pc = 0x2F59D0u;
    // 0x2f59d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f59d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f59d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f59d8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F59D8u;
    {
        const bool branch_taken_0x2f59d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59D8u;
        // 0x2f59dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59d8) {
            ctx->pc = 0x2F59E8u;
            goto label_2f59e8;
        }
    }
    ctx->pc = 0x2F59E0u;
    // 0x2f59e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2F59E0u;
    {
        const bool branch_taken_0x2f59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59E0u;
        // 0x2f59e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59e0) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F59E8u;
label_2f59e8:
    // 0x2f59e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F59E8u;
    {
        const bool branch_taken_0x2f59e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59E8u;
        // 0x2f59ec: 0x27b2031c  addiu       $s2, $sp, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59e8) {
            ctx->pc = 0x2F5A24u;
            goto label_2f5a24;
        }
    }
    ctx->pc = 0x2F59F0u;
label_2f59f0:
    // 0x2f59f0: 0x2023026  xor         $a2, $s0, $v0
    ctx->pc = 0x2f59f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2f59f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f59f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59f8: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F59F8u;
    SET_GPR_U32(ctx, 31, 0x2F5A00u);
    ctx->pc = 0x2F59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59F8u;
    // 0x2f59fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F59F8u, 0x2F5A00u)) {
        return;
    }
    ctx->pc = 0x2F5A00u;
label_2f5a00:
    // 0x2f5a00: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x2f5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x2f5a04: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F5A04u;
    {
        const bool branch_taken_0x2f5a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A04u;
        // 0x2f5a08: 0xdfbf0360  ld          $ra, 0x360($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a04) {
            ctx->pc = 0x2F5AB0u;
            goto label_2f5ab0;
        }
    }
    ctx->pc = 0x2F5A0Cu;
    // 0x2f5a0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5a14: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5A14u;
    {
        const bool branch_taken_0x2f5a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A14u;
        // 0x2f5a18: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a14) {
            ctx->pc = 0x2F5A60u;
            goto label_2f5a60;
        }
    }
    ctx->pc = 0x2F5A1Cu;
    // 0x2f5a1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5a20: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2f5a20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_2f5a24:
    // 0x2f5a24: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f5a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a30: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F5A30u;
    SET_GPR_U32(ctx, 31, 0x2F5A38u);
    ctx->pc = 0x2F5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A30u;
    // 0x2f5a34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F5A30u, 0x2F5A38u)) {
        return;
    }
    ctx->pc = 0x2F5A38u;
label_2f5a38:
    // 0x2f5a38: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x2f5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
    // 0x2f5a3c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5A3Cu;
    {
        const bool branch_taken_0x2f5a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A3Cu;
        // 0x2f5a40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a3c) {
            ctx->pc = 0x2F5A8Cu;
            goto label_2f5a8c;
        }
    }
    ctx->pc = 0x2F5A44u;
    // 0x2f5a44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f5a48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2f5a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x2f5a4c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5A4Cu;
    {
        const bool branch_taken_0x2f5a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a4c) {
            ctx->pc = 0x2F5A60u;
            goto label_2f5a60;
        }
    }
    ctx->pc = 0x2F5A54u;
    // 0x2f5a54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f5a58: 0x600ffe5  bltz        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F5A58u;
    {
        const bool branch_taken_0x2f5a58 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2F5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A58u;
        // 0x2f5a5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a58) {
            ctx->pc = 0x2F59F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f59f0;
        }
    }
    ctx->pc = 0x2F5A60u;
label_2f5a60:
    // 0x2f5a60: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F5A60u;
    SET_GPR_U32(ctx, 31, 0x2F5A68u);
    ctx->pc = 0x2F5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A60u;
    // 0x2f5a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F5A60u, 0x2F5A68u)) {
        return;
    }
    ctx->pc = 0x2F5A68u;
label_2f5a68:
    // 0x2f5a68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5A68u;
    {
        const bool branch_taken_0x2f5a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a68) {
            ctx->pc = 0x2F5A80u;
            goto label_2f5a80;
        }
    }
    ctx->pc = 0x2F5A70u;
    // 0x2f5a70: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F5A70u;
    SET_GPR_U32(ctx, 31, 0x2F5A78u);
    ctx->pc = 0x2F5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A70u;
    // 0x2f5a74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F5A70u, 0x2F5A78u)) {
        return;
    }
    ctx->pc = 0x2F5A78u;
label_2f5a78:
    // 0x2f5a78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5A78u;
    {
        const bool branch_taken_0x2f5a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A78u;
        // 0x2f5a7c: 0x24040898  addiu       $a0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a78) {
            ctx->pc = 0x2F5A94u;
            goto label_2f5a94;
        }
    }
    ctx->pc = 0x2F5A80u;
label_2f5a80:
    // 0x2f5a80: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5a84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5A84u;
    {
        const bool branch_taken_0x2f5a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A84u;
        // 0x2f5a88: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a84) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F5A8Cu;
label_2f5a8c:
    // 0x2f5a8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5A8Cu;
    {
        const bool branch_taken_0x2f5a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A8Cu;
        // 0x2f5a90: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a8c) {
            ctx->pc = 0x2F5AACu;
            goto label_2f5aac;
        }
    }
    ctx->pc = 0x2F5A94u;
label_2f5a94:
    // 0x2f5a94: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f5a98: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x2f5a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f5a9c: 0x2463b748  addiu       $v1, $v1, -0x48B8
    ctx->pc = 0x2f5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f5aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5aa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5aa8: 0xac600890  sw          $zero, 0x890($v1)
    ctx->pc = 0x2f5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2192), GPR_U32(ctx, 0));
label_2f5aac:
    // 0x2f5aac: 0xdfbf0360  ld          $ra, 0x360($sp)
    ctx->pc = 0x2f5aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 864)));
label_2f5ab0:
    // 0x2f5ab0: 0xdfb30350  ld          $s3, 0x350($sp)
    ctx->pc = 0x2f5ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2f5ab4: 0xdfb20340  ld          $s2, 0x340($sp)
    ctx->pc = 0x2f5ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2f5ab8: 0xdfb10330  ld          $s1, 0x330($sp)
    ctx->pc = 0x2f5ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x2f5abc: 0xdfb00320  ld          $s0, 0x320($sp)
    ctx->pc = 0x2f5abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2f5ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AC0u;
        // 0x2f5ac4: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5AC8u;
}
