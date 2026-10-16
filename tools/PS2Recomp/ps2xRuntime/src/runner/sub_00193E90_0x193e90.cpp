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

// Function: sub_00193E90
// Address: 0x193e90 - 0x194018
void sub_00193E90_0x193e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193E90_0x193e90");
#endif

    ctx->pc = 0x193e90u;

    // 0x193e90: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x193e94: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x193e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x193e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193E98u;
    {
        const bool branch_taken_0x193e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E98u;
        // 0x193e9c: 0xac80013c  sw          $zero, 0x13C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e98) {
            ctx->pc = 0x193EA8u;
            goto label_193ea8;
        }
    }
    ctx->pc = 0x193EA0u;
    // 0x193ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ea4: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
label_193ea8:
    // 0x193ea8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x193eac: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x193eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x193eb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193EB0u;
    {
        const bool branch_taken_0x193eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193eb0) {
            ctx->pc = 0x193EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193EB0u;
            // 0x193eb4: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193EC8u;
            goto label_193ec8;
        }
    }
    ctx->pc = 0x193EB8u;
    // 0x193eb8: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193ebc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x193ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x193ec0: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193ec4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193ec8:
    // 0x193ec8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x193ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193ecc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193ECCu;
    {
        const bool branch_taken_0x193ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ecc) {
            ctx->pc = 0x193ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193ECCu;
            // 0x193ed0: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193EE4u;
            goto label_193ee4;
        }
    }
    ctx->pc = 0x193ED4u;
    // 0x193ed4: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193ed8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x193ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x193edc: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193ee0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193ee4:
    // 0x193ee4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x193ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x193ee8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193EE8u;
    {
        const bool branch_taken_0x193ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ee8) {
            ctx->pc = 0x193EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193EE8u;
            // 0x193eec: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F00u;
            goto label_193f00;
        }
    }
    ctx->pc = 0x193EF0u;
    // 0x193ef0: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193ef4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x193ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x193ef8: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193efc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f00:
    // 0x193f00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x193f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x193f04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F04u;
    {
        const bool branch_taken_0x193f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f04) {
            ctx->pc = 0x193F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F04u;
            // 0x193f08: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F1Cu;
            goto label_193f1c;
        }
    }
    ctx->pc = 0x193F0Cu;
    // 0x193f0c: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f10: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x193f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x193f14: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193f18: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f1c:
    // 0x193f1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x193f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x193f20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F20u;
    {
        const bool branch_taken_0x193f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f20) {
            ctx->pc = 0x193F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F20u;
            // 0x193f24: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F38u;
            goto label_193f38;
        }
    }
    ctx->pc = 0x193F28u;
    // 0x193f28: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f2c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x193f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x193f30: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193f34: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f38:
    // 0x193f38: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x193f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x193f3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F3Cu;
    {
        const bool branch_taken_0x193f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f3c) {
            ctx->pc = 0x193F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F3Cu;
            // 0x193f40: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F54u;
            goto label_193f54;
        }
    }
    ctx->pc = 0x193F44u;
    // 0x193f44: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x193f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x193f4c: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193f50: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f54:
    // 0x193f54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x193f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x193f58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F58u;
    {
        const bool branch_taken_0x193f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f58) {
            ctx->pc = 0x193F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F58u;
            // 0x193f5c: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F70u;
            goto label_193f70;
        }
    }
    ctx->pc = 0x193F60u;
    // 0x193f60: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f64: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x193f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x193f68: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193f6c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f70:
    // 0x193f70: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x193f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x193f74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F74u;
    {
        const bool branch_taken_0x193f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f74) {
            ctx->pc = 0x193F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F74u;
            // 0x193f78: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F8Cu;
            goto label_193f8c;
        }
    }
    ctx->pc = 0x193F7Cu;
    // 0x193f7c: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f80: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x193f84: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193f88: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193f8c:
    // 0x193f8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x193f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x193f90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F90u;
    {
        const bool branch_taken_0x193f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f90) {
            ctx->pc = 0x193F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F90u;
            // 0x193f94: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193FA8u;
            goto label_193fa8;
        }
    }
    ctx->pc = 0x193F98u;
    // 0x193f98: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193f9c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x193f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x193fa0: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193fa4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193fa8:
    // 0x193fa8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x193fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x193fac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193FACu;
    {
        const bool branch_taken_0x193fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fac) {
            ctx->pc = 0x193FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193FACu;
            // 0x193fb0: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193FC4u;
            goto label_193fc4;
        }
    }
    ctx->pc = 0x193FB4u;
    // 0x193fb4: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193fb8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x193fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x193fbc: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193fc0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x193fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_193fc4:
    // 0x193fc4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x193fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x193fc8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193FC8u;
    {
        const bool branch_taken_0x193fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193fc8) {
            ctx->pc = 0x193FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193FC8u;
            // 0x193fcc: 0x9082004f  lbu         $v0, 0x4F($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193FE0u;
            goto label_193fe0;
        }
    }
    ctx->pc = 0x193FD0u;
    // 0x193fd0: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x193fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x193fd4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x193fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x193fd8: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x193fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x193fdc: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x193fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
label_193fe0:
    // 0x193fe0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x193fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193fe8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x193fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x193fec: 0x0  nop
    ctx->pc = 0x193fecu;
    // NOP
    // 0x193ff0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x193ff4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x193ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x193ff8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193ffc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x193ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x194000: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x194000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x194004: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x194004u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194008: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x194008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19400c: 0x3e00008  jr          $ra
    ctx->pc = 0x19400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194014u;
    // 0x194014: 0x0  nop
    ctx->pc = 0x194014u;
    // NOP
    ctx->pc = 0x194018u;
}
