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

// Function: sub_002DC348
// Address: 0x2dc348 - 0x2dc470
void sub_002DC348_0x2dc348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC348_0x2dc348");
#endif

    ctx->pc = 0x2dc348u;

    // 0x2dc348: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2dc348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dc34c: 0x10820041  beq         $a0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DC34Cu;
    {
        const bool branch_taken_0x2dc34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC34Cu;
        // 0x2dc350: 0x2c820041  sltiu       $v0, $a0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc34c) {
            ctx->pc = 0x2DC454u;
            goto label_2dc454;
        }
    }
    ctx->pc = 0x2DC354u;
    // 0x2dc354: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC354u;
    {
        const bool branch_taken_0x2dc354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC354u;
        // 0x2dc358: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc354) {
            ctx->pc = 0x2DC3BCu;
            goto label_2dc3bc;
        }
    }
    ctx->pc = 0x2DC35Cu;
    // 0x2dc35c: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2DC35Cu;
    {
        const bool branch_taken_0x2dc35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC35Cu;
        // 0x2dc360: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc35c) {
            ctx->pc = 0x2DC444u;
            goto label_2dc444;
        }
    }
    ctx->pc = 0x2DC364u;
    // 0x2dc364: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC364u;
    {
        const bool branch_taken_0x2dc364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC364u;
        // 0x2dc368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc364) {
            ctx->pc = 0x2DC384u;
            goto label_2dc384;
        }
    }
    ctx->pc = 0x2DC36Cu;
    // 0x2dc36c: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DC36Cu;
    {
        const bool branch_taken_0x2dc36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC36Cu;
        // 0x2dc370: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc36c) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC374u;
    // 0x2dc374: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DC374u;
    {
        const bool branch_taken_0x2dc374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC374u;
        // 0x2dc378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc374) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC37Cu;
    // 0x2dc37c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DC37Cu;
    {
        const bool branch_taken_0x2dc37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc37c) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC384u;
label_2dc384:
    // 0x2dc384: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2dc384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dc388: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DC388u;
    {
        const bool branch_taken_0x2dc388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC388u;
        // 0x2dc38c: 0x2c820011  sltiu       $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc388) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC390u;
    // 0x2dc390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC390u;
    {
        const bool branch_taken_0x2dc390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC390u;
        // 0x2dc394: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc390) {
            ctx->pc = 0x2DC3A8u;
            goto label_2dc3a8;
        }
    }
    ctx->pc = 0x2DC398u;
    // 0x2dc398: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2DC398u;
    {
        const bool branch_taken_0x2dc398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC398u;
        // 0x2dc39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc398) {
            ctx->pc = 0x2DC444u;
            goto label_2dc444;
        }
    }
    ctx->pc = 0x2DC3A0u;
    // 0x2dc3a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DC3A0u;
    {
        const bool branch_taken_0x2dc3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3a0) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC3A8u;
label_2dc3a8:
    // 0x2dc3a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2dc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc3ac: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DC3ACu;
    {
        const bool branch_taken_0x2dc3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3ACu;
        // 0x2dc3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3ac) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC3B4u;
    // 0x2dc3b4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2DC3B4u;
    {
        const bool branch_taken_0x2dc3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3b4) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC3BCu;
label_2dc3bc:
    // 0x2dc3bc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2dc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2dc3c0: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DC3C0u;
    {
        const bool branch_taken_0x2dc3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C0u;
        // 0x2dc3c4: 0x2c820401  sltiu       $v0, $a0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c0) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC3C8u;
    // 0x2dc3c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DC3C8u;
    {
        const bool branch_taken_0x2dc3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3C8u;
        // 0x2dc3cc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3c8) {
            ctx->pc = 0x2DC404u;
            goto label_2dc404;
        }
    }
    ctx->pc = 0x2DC3D0u;
    // 0x2dc3d0: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DC3D0u;
    {
        const bool branch_taken_0x2dc3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3D0u;
        // 0x2dc3d4: 0x2c820101  sltiu       $v0, $a0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3d0) {
            ctx->pc = 0x2DC45Cu;
            goto label_2dc45c;
        }
    }
    ctx->pc = 0x2DC3D8u;
    // 0x2dc3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC3D8u;
    {
        const bool branch_taken_0x2dc3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3D8u;
        // 0x2dc3dc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3d8) {
            ctx->pc = 0x2DC3F0u;
            goto label_2dc3f0;
        }
    }
    ctx->pc = 0x2DC3E0u;
    // 0x2dc3e0: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DC3E0u;
    {
        const bool branch_taken_0x2dc3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3E0u;
        // 0x2dc3e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3e0) {
            ctx->pc = 0x2DC454u;
            goto label_2dc454;
        }
    }
    ctx->pc = 0x2DC3E8u;
    // 0x2dc3e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC3E8u;
    {
        const bool branch_taken_0x2dc3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3e8) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC3F0u;
label_2dc3f0:
    // 0x2dc3f0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2dc3f4: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC3F4u;
    {
        const bool branch_taken_0x2dc3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3F4u;
        // 0x2dc3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3f4) {
            ctx->pc = 0x2DC45Cu;
            goto label_2dc45c;
        }
    }
    ctx->pc = 0x2DC3FCu;
    // 0x2dc3fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC3FCu;
    {
        const bool branch_taken_0x2dc3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3fc) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC404u;
label_2dc404:
    // 0x2dc404: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2dc408: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC408u;
    {
        const bool branch_taken_0x2dc408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC408u;
        // 0x2dc40c: 0x2c821001  sltiu       $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc408) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC410u;
    // 0x2dc410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC410u;
    {
        const bool branch_taken_0x2dc410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC410u;
        // 0x2dc414: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc410) {
            ctx->pc = 0x2DC428u;
            goto label_2dc428;
        }
    }
    ctx->pc = 0x2DC418u;
    // 0x2dc418: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC418u;
    {
        const bool branch_taken_0x2dc418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC418u;
        // 0x2dc41c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc418) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC420u;
    // 0x2dc420: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC420u;
    {
        const bool branch_taken_0x2dc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc420) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC428u;
label_2dc428:
    // 0x2dc428: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2dc428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2dc42c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC42Cu;
    {
        const bool branch_taken_0x2dc42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC42Cu;
        // 0x2dc430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc42c) {
            ctx->pc = 0x2DC44Cu;
            goto label_2dc44c;
        }
    }
    ctx->pc = 0x2DC434u;
    // 0x2dc434: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC434u;
    {
        const bool branch_taken_0x2dc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc434) {
            ctx->pc = 0x2DC464u;
            goto label_2dc464;
        }
    }
    ctx->pc = 0x2DC43Cu;
label_2dc43c:
    // 0x2dc43c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC43Cu;
        // 0x2dc440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC444u;
label_2dc444:
    // 0x2dc444: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC444u;
        // 0x2dc448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC44Cu;
label_2dc44c:
    // 0x2dc44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC44Cu;
        // 0x2dc450: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC454u;
label_2dc454:
    // 0x2dc454: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC454u;
        // 0x2dc458: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC45Cu;
label_2dc45c:
    // 0x2dc45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC45Cu;
        // 0x2dc460: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC464u;
label_2dc464:
    // 0x2dc464: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC46Cu;
    // 0x2dc46c: 0x0  nop
    ctx->pc = 0x2dc46cu;
    // NOP
    ctx->pc = 0x2dc470u;
}
