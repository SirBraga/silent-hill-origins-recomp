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

// Function: sub_00286B08
// Address: 0x286b08 - 0x286d58
void sub_00286B08_0x286b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286B08_0x286b08");
#endif

    switch (ctx->pc) {
        case 0x286b44u: goto label_286b44;
        case 0x286b78u: goto label_286b78;
        case 0x286bacu: goto label_286bac;
        case 0x286bccu: goto label_286bcc;
        case 0x286becu: goto label_286bec;
        case 0x286c10u: goto label_286c10;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c4cu: goto label_286c4c;
        case 0x286c68u: goto label_286c68;
        case 0x286c88u: goto label_286c88;
        case 0x286ca4u: goto label_286ca4;
        case 0x286cc4u: goto label_286cc4;
        case 0x286ce0u: goto label_286ce0;
        case 0x286d00u: goto label_286d00;
        case 0x286d1cu: goto label_286d1c;
        default: break;
    }

    ctx->pc = 0x286b08u;

    // 0x286b08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x286b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x286b0c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x286b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x286b10: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x286b10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x286b14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x286b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x286b18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x286b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x286b1c: 0x24c67120  addiu       $a2, $a2, 0x7120
    ctx->pc = 0x286b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28960));
    // 0x286b20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x286b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x286b24: 0x24e77138  addiu       $a3, $a3, 0x7138
    ctx->pc = 0x286b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28984));
    // 0x286b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x286b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x286b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x286b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x286b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x286b34: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x286b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x286b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286b3c: 0xc0895e6  jal         func_225798
    ctx->pc = 0x286B3Cu;
    SET_GPR_U32(ctx, 31, 0x286B44u);
    ctx->pc = 0x286B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B3Cu;
    // 0x286b40: 0x2405011f  addiu       $a1, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x286B3Cu, 0x286B44u)) {
        return;
    }
    ctx->pc = 0x286B44u;
label_286b44:
    // 0x286b44: 0x4400079  bltz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x286B44u;
    {
        const bool branch_taken_0x286b44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B44u;
        // 0x286b48: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b44) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286B4Cu;
    // 0x286b4c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x286b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x286b50: 0x24547150  addiu       $s4, $v0, 0x7150
    ctx->pc = 0x286b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 29008));
    // 0x286b54: 0x24757168  addiu       $s5, $v1, 0x7168
    ctx->pc = 0x286b54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 29032));
    // 0x286b58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x286b5c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286b60: 0x245372b8  addiu       $s3, $v0, 0x72B8
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29368));
    // 0x286b64: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286b68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b6c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b70: 0xc095b24  jal         func_256C90
    ctx->pc = 0x286B70u;
    SET_GPR_U32(ctx, 31, 0x286B78u);
    ctx->pc = 0x286B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B70u;
    // 0x286b74: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x286B70u, 0x286B78u)) {
        return;
    }
    ctx->pc = 0x286B78u;
label_286b78:
    // 0x286b78: 0x440006c  bltz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x286B78u;
    {
        const bool branch_taken_0x286b78 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B78u;
        // 0x286b7c: 0xaf828894  sw          $v0, -0x776C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b78) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286B80u;
    // 0x286b80: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x286b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x286b84: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x286b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x286b88: 0x245172e8  addiu       $s1, $v0, 0x72E8
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29416));
    // 0x286b8c: 0x247273a8  addiu       $s2, $v1, 0x73A8
    ctx->pc = 0x286b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29608));
    // 0x286b90: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x286b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x286b94: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286b98: 0x24507520  addiu       $s0, $v0, 0x7520
    ctx->pc = 0x286b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x286b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ba0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ba4: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x286BA4u;
    SET_GPR_U32(ctx, 31, 0x286BACu);
    ctx->pc = 0x286BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BA4u;
    // 0x286ba8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x286BA4u, 0x286BACu)) {
        return;
    }
    ctx->pc = 0x286BACu;
label_286bac:
    // 0x286bac: 0x440005f  bltz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x286BACu;
    {
        const bool branch_taken_0x286bac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0xaf828898  sw          $v0, -0x7768($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bac) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286BB4u;
    // 0x286bb4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286bb8: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286bbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc4: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x286BC4u;
    SET_GPR_U32(ctx, 31, 0x286BCCu);
    ctx->pc = 0x286BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BC4u;
    // 0x286bc8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x286BC4u, 0x286BCCu)) {
        return;
    }
    ctx->pc = 0x286BCCu;
label_286bcc:
    // 0x286bcc: 0x8f838894  lw          $v1, -0x776C($gp)
    ctx->pc = 0x286bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x286bd0: 0x4600056  bltz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x286BD0u;
    {
        const bool branch_taken_0x286bd0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x286BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BD0u;
        // 0x286bd4: 0xaf82889c  sw          $v0, -0x7764($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bd0) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286BD8u;
    // 0x286bd8: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286be0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286be4: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x286BE4u;
    SET_GPR_U32(ctx, 31, 0x286BECu);
    ctx->pc = 0x286BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286BE4u;
    // 0x286be8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x286BE4u, 0x286BECu)) {
        return;
    }
    ctx->pc = 0x286BECu;
label_286bec:
    // 0x286bec: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x286becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x286bf0: 0x460004e  bltz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x286BF0u;
    {
        const bool branch_taken_0x286bf0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x286BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BF0u;
        // 0x286bf4: 0xaf8288a0  sw          $v0, -0x7760($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286bf0) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286BF8u;
    // 0x286bf8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286bfc: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c04: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c08: 0xc089a24  jal         func_226890
    ctx->pc = 0x286C08u;
    SET_GPR_U32(ctx, 31, 0x286C10u);
    ctx->pc = 0x286C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C08u;
    // 0x286c0c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226890u, 0x286C08u, 0x286C10u)) {
        return;
    }
    ctx->pc = 0x286C10u;
label_286c10:
    // 0x286c10: 0x4400046  bltz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x286C10u;
    {
        const bool branch_taken_0x286c10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C10u;
        // 0x286c14: 0xaf8288a4  sw          $v0, -0x775C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c10) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286C18u;
    // 0x286c18: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c24: 0xc088b96  jal         func_222E58
    ctx->pc = 0x286C24u;
    SET_GPR_U32(ctx, 31, 0x286C2Cu);
    ctx->pc = 0x286C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C24u;
    // 0x286c28: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x222E58u, 0x286C24u, 0x286C2Cu)) {
        return;
    }
    ctx->pc = 0x286C2Cu;
label_286c2c:
    // 0x286c2c: 0x440003f  bltz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x286C2Cu;
    {
        const bool branch_taken_0x286c2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C2Cu;
        // 0x286c30: 0xaf8288a8  sw          $v0, -0x7758($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c2c) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286C34u;
    // 0x286c34: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286c38: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c40: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c44: 0xc089470  jal         func_2251C0
    ctx->pc = 0x286C44u;
    SET_GPR_U32(ctx, 31, 0x286C4Cu);
    ctx->pc = 0x286C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C44u;
    // 0x286c48: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2251C0u, 0x286C44u, 0x286C4Cu)) {
        return;
    }
    ctx->pc = 0x286C4Cu;
label_286c4c:
    // 0x286c4c: 0x4400037  bltz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0xaf8288ac  sw          $v0, -0x7754($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286C54u;
    // 0x286c54: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c60: 0xc0c0c86  jal         func_303218
    ctx->pc = 0x286C60u;
    SET_GPR_U32(ctx, 31, 0x286C68u);
    ctx->pc = 0x286C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C60u;
    // 0x286c64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303218u, 0x286C60u, 0x286C68u)) {
        return;
    }
    ctx->pc = 0x286C68u;
label_286c68:
    // 0x286c68: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x286C68u;
    {
        const bool branch_taken_0x286c68 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C68u;
        // 0x286c6c: 0xaf8288b0  sw          $v0, -0x7750($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c68) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286C70u;
    // 0x286c70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286c74: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c7c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c80: 0xc095d72  jal         func_2575C8
    ctx->pc = 0x286C80u;
    SET_GPR_U32(ctx, 31, 0x286C88u);
    ctx->pc = 0x286C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C80u;
    // 0x286c84: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2575C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2575C8u, 0x286C80u, 0x286C88u)) {
        return;
    }
    ctx->pc = 0x286C88u;
label_286c88:
    // 0x286c88: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x286C88u;
    {
        const bool branch_taken_0x286c88 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C88u;
        // 0x286c8c: 0xaf8288b4  sw          $v0, -0x774C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c88) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286C90u;
    // 0x286c90: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c9c: 0xc095d84  jal         func_257610
    ctx->pc = 0x286C9Cu;
    SET_GPR_U32(ctx, 31, 0x286CA4u);
    ctx->pc = 0x286CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C9Cu;
    // 0x286ca0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257610u, 0x286C9Cu, 0x286CA4u)) {
        return;
    }
    ctx->pc = 0x286CA4u;
label_286ca4:
    // 0x286ca4: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x286CA4u;
    {
        const bool branch_taken_0x286ca4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CA4u;
        // 0x286ca8: 0xaf8288b8  sw          $v0, -0x7748($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ca4) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286CACu;
    // 0x286cac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286cb0: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x286cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286cb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cb8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cbc: 0xc095f80  jal         func_257E00
    ctx->pc = 0x286CBCu;
    SET_GPR_U32(ctx, 31, 0x286CC4u);
    ctx->pc = 0x286CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CBCu;
    // 0x286cc0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E00u, 0x286CBCu, 0x286CC4u)) {
        return;
    }
    ctx->pc = 0x286CC4u;
label_286cc4:
    // 0x286cc4: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x286CC4u;
    {
        const bool branch_taken_0x286cc4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CC4u;
        // 0x286cc8: 0xaf8288bc  sw          $v0, -0x7744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cc4) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286CCCu;
    // 0x286ccc: 0x2404011f  addiu       $a0, $zero, 0x11F
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x286cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd8: 0xc095f92  jal         func_257E48
    ctx->pc = 0x286CD8u;
    SET_GPR_U32(ctx, 31, 0x286CE0u);
    ctx->pc = 0x286CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CD8u;
    // 0x286cdc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257E48u, 0x286CD8u, 0x286CE0u)) {
        return;
    }
    ctx->pc = 0x286CE0u;
label_286ce0:
    // 0x286ce0: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x286CE0u;
    {
        const bool branch_taken_0x286ce0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CE0u;
        // 0x286ce4: 0xaf8288c0  sw          $v0, -0x7740($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ce0) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286CE8u;
    // 0x286ce8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x286cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cf0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x286cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cf4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x286cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x286cf8: 0xc08ac7a  jal         func_22B1E8
    ctx->pc = 0x286CF8u;
    SET_GPR_U32(ctx, 31, 0x286D00u);
    ctx->pc = 0x286CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CF8u;
    // 0x286cfc: 0x2405011f  addiu       $a1, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B1E8u, 0x286CF8u, 0x286D00u)) {
        return;
    }
    ctx->pc = 0x286D00u;
label_286d00:
    // 0x286d00: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x286D00u;
    {
        const bool branch_taken_0x286d00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D00u;
        // 0x286d04: 0xaf8288c4  sw          $v0, -0x773C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d00) {
            ctx->pc = 0x286D2Cu;
            goto label_286d2c;
        }
    }
    ctx->pc = 0x286D08u;
    // 0x286d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d14: 0xc088c90  jal         func_223240
    ctx->pc = 0x286D14u;
    SET_GPR_U32(ctx, 31, 0x286D1Cu);
    ctx->pc = 0x286D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D14u;
    // 0x286d18: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223240u, 0x286D14u, 0x286D1Cu)) {
        return;
    }
    ctx->pc = 0x286D1Cu;
label_286d1c:
    // 0x286d1c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x286d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x286d20: 0xaf8288c8  sw          $v0, -0x7738($gp)
    ctx->pc = 0x286d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 2));
    // 0x286d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286D24u;
    {
        const bool branch_taken_0x286d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D24u;
        // 0x286d28: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d24) {
            ctx->pc = 0x286D30u;
            goto label_286d30;
        }
    }
    ctx->pc = 0x286D2Cu;
label_286d2c:
    // 0x286d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286d30:
    // 0x286d30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x286d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286d34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x286d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286d38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x286d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286d40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x286d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286d44: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x286d44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x286D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D4Cu;
        // 0x286d50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286D54u;
    // 0x286d54: 0x0  nop
    ctx->pc = 0x286d54u;
    // NOP
    ctx->pc = 0x286d58u;
}
